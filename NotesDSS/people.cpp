#include "people.h"

people::people(QWidget *parent):QWidget(parent){
    ui.setupUi(this);
    ui.groupBox_card->hide();
    ui.tableWidget_people->setColumnHidden(0, true);
    ui.tableWidget_people->setColumnHidden(2, true);
    id = 0;
    crow = 0;

    load();

    connect(ui.toolButton_add, SIGNAL(clicked()), this, SLOT(add()));
    connect(ui.tableWidget_people, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(edit()));
    connect(ui.pushButton_close, SIGNAL(clicked()), ui.groupBox_card, SLOT(hide()));
    connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui.toolButton_del, SIGNAL(clicked()), this, SLOT(del()));

    connect(ui.lineEdit_fam, SIGNAL(textEdited(QString)), this, SLOT(makeFace()));
    connect(ui.lineEdit_name, SIGNAL(textEdited(QString)), this, SLOT(makeFace()));
    connect(ui.lineEdit_otc, SIGNAL(textEdited(QString)), this, SLOT(makeFace()));
}

void people::load(){
    for (int r = ui.tableWidget_people->rowCount(); r >= 0; r--){
        ui.tableWidget_people->removeRow(r);
    }
    QSqlQuery query("select face.id, face.face, (select Count(people.id) from people where people.face = face.id) "
                    "from face"
                    "order by face.face");
    int row = 0;
    while (query.next()){
        ui.tableWidget_people->insertRow(row);
        for (int col = 0; col < 3; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui.tableWidget_people->setItem(row, col, item);
        }
        row++;
    }
    ui.tableWidget_people->resizeColumnsToContents();
    ui.tableWidget_people->horizontalHeader()->setStretchLastSection(true);
}

void people::add(){
    ui.groupBox_card->setVisible(true);
    id = 0;

    ui.lineEdit_fam->clear();
    ui.lineEdit_name->clear();
    ui.lineEdit_otc->clear();
    ui.lineEdit_face->clear();

    ui.lineEdit_fam->setFocus();
}

void people::edit(){
    crow = ui.tableWidget_people->currentRow();
    id = ui.tableWidget_people->item(crow, 0)->text().toInt();

    QSqlQuery query(QString("select face.fam, face.name, face.otc, face.face "
                            "from face "
                            "where face.id = \'%1\' ").arg(id));
    query.next();
    ui.lineEdit_fam->setText(query.value(0).toString());
    ui.lineEdit_name->setText(query.value(1).toString());
    ui.lineEdit_otc->setText(query.value(2).toString());
    ui.lineEdit_face->setText(query.value(3).toString());

    ui.lineEdit_fam->setFocus();
}

void people::makeFace(){
    QString fam;
    if (!ui.lineEdit_fam->text().isEmpty()){
        fam.append(ui.lineEdit_fam->text());
    }

    QString name;
    if (!ui.lineEdit_name->text().isEmpty()){
        name.append(QString("%1.").arg(ui.lineEdit_name->text().left(1)));
    }

    QString otc;
    if (!ui.lineEdit_otc->text().isEmpty()){
        otc.append(QString("%1.").arg(ui.lineEdit_otc->text().left(1)));
    }

    ui.lineEdit_face->setText(QString("%1 %2%3").arg(fam).arg(name).arg(otc));
}

void people::save(){

}

void people::del(){

}

void people::makeStatus(const QString text){

}
