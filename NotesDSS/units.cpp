#include "units.h"

units::units(QWidget *parent):QWidget(parent){
    ui.setupUi(this);

    id = 0;
    crow = -1;

    ui.groupBox_units->hide();
    //ui.tableWidget_units->setColumnHidden(0, true);
    //ui.tableWidget_units->setColumnHidden(2, true);

    loadUnits();

    connect(ui.toolButton_add, SIGNAL(clicked()), this, SLOT(addUnits()));
    connect(ui.toolButton_update, SIGNAL(clicked()), this, SLOT(loadUnits()));
    connect(ui.tableWidget_units, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(editUnits()));
    connect(ui.pushButton_close, SIGNAL(clicked()), ui.groupBox_units, SLOT(hide()));
    connect(ui.toolButton_del, SIGNAL(clicked()), this, SLOT(deleteUnits()));


}

void units::loadUnits(){
    ui.groupBox_units->hide();
    //clear
    for (int r = ui.tableWidget_units->rowCount(); r >= 0; r--){
        ui.tableWidget_units->removeRow(r);
    }
    //load data
    QSqlQuery query("select units.id, units.name, "
                    "(select Count(material.id) from material where material.units = units.id) "
                    "from units "
                    "order by units.name ");
    int row = 0;
    while (query.next()) {
        ui.tableWidget_units->insertRow(row);
        for (int col = 0; col < 3; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui.tableWidget_units->setItem(row, col, item);
        }
        row++;
    }
    ui.tableWidget_units->resizeColumnsToContents();
    ui.tableWidget_units->horizontalHeader()->setStretchLastSection(true);
}

void units::addUnits(){
    ui.groupBox_units->setVisible(true);
    ui.lineEdit->clear();
    ui.lineEdit->setFocus();
    id = 0;
    crow = -1;
}

void units::editUnits(){
    ui.groupBox_units->setVisible(true);
    crow = ui.tableWidget_units->currentRow();
    id = ui.tableWidget_units->item(crow, 0)->text().toInt();
    ui.lineEdit->setText(ui.tableWidget_units->item(crow, 1)->text());
    ui.lineEdit->setFocus();
}

void units::deleteUnits(){
    QString error;
    if (id > 0){
        int test = ui.tableWidget_units->item(crow, 2)->text().toInt();
        if (test == 0){
            QSqlQuery query(QString("delete from units where units.id = \'%1\' ").arg(id));
            query.exec();
            error.append(query.lastError().text());
        } else {
            error.append("Выбранная единица измерения сейчас используется, поэтому ее удалить нельзя.");
        }

    } else {
        error.append("Выберите единицу измерения!");
    }
    if (error.size() > 3){
        makeStatus(error);
    } else {
        makeStatus(QString("Выбранная единица измерения удалена."));
        loadUnits();
        ui.groupBox_units->hide();
    }
}

void units::makeStatus(const QString text){
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), ui.label_status, SLOT(clear()));
    ui.label_status->setText(text);
    timer->start(10000);
}
