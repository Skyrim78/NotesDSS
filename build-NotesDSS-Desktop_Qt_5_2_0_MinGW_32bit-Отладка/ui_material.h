/********************************************************************************
** Form generated from reading UI file 'material.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIAL_H
#define UI_MATERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_material
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_menuM;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QToolButton *toolButton_addM;
    QToolButton *toolButton_delM;
    QToolButton *toolButton_updM;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_card;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_art;
    QLabel *label_3;
    QComboBox *comboBox_units;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QPushButton *pushButton_close;
    QTableWidget *tableWidget_material;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_file;
    QToolButton *toolButton_open;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_menuI;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QToolButton *toolButton_remLine;
    QToolButton *toolButton_clear;
    QToolButton *toolButton_add;
    QProgressBar *progressBar;
    QTableWidget *tableWidget_import;
    QLabel *label_status;

    void setupUi(QWidget *material)
    {
        if (material->objectName().isEmpty())
            material->setObjectName(QStringLiteral("material"));
        material->resize(743, 543);
        gridLayout = new QGridLayout(material);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(material);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox_menuM = new QGroupBox(tab);
        groupBox_menuM->setObjectName(QStringLiteral("groupBox_menuM"));
        gridLayout_3 = new QGridLayout(groupBox_menuM);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        toolButton_addM = new QToolButton(groupBox_menuM);
        toolButton_addM->setObjectName(QStringLiteral("toolButton_addM"));
        toolButton_addM->setMinimumSize(QSize(30, 30));
        toolButton_addM->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(toolButton_addM);

        toolButton_delM = new QToolButton(groupBox_menuM);
        toolButton_delM->setObjectName(QStringLiteral("toolButton_delM"));
        toolButton_delM->setMinimumSize(QSize(30, 30));
        toolButton_delM->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(toolButton_delM);

        toolButton_updM = new QToolButton(groupBox_menuM);
        toolButton_updM->setObjectName(QStringLiteral("toolButton_updM"));
        toolButton_updM->setMinimumSize(QSize(30, 30));
        toolButton_updM->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(toolButton_updM);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_menuM);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_card = new QGroupBox(tab);
        groupBox_card->setObjectName(QStringLiteral("groupBox_card"));
        gridLayout_2 = new QGridLayout(groupBox_card);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox_card);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_name = new QLineEdit(groupBox_card);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox_card);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_art = new QLineEdit(groupBox_card);
        lineEdit_art->setObjectName(QStringLiteral("lineEdit_art"));
        lineEdit_art->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(lineEdit_art);

        label_3 = new QLabel(groupBox_card);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_units = new QComboBox(groupBox_card);
        comboBox_units->setObjectName(QStringLiteral("comboBox_units"));
        comboBox_units->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(comboBox_units);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(groupBox_card);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout_2->addWidget(pushButton_save);

        pushButton_close = new QPushButton(groupBox_card);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        horizontalLayout_2->addWidget(pushButton_close);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_card);

        tableWidget_material = new QTableWidget(tab);
        if (tableWidget_material->columnCount() < 5)
            tableWidget_material->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_material->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_material->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_material->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_material->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_material->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_material->setObjectName(QStringLiteral("tableWidget_material"));
        tableWidget_material->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_material->setAlternatingRowColors(true);
        tableWidget_material->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_material->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_material->setSortingEnabled(true);
        tableWidget_material->horizontalHeader()->setStretchLastSection(true);
        tableWidget_material->verticalHeader()->setDefaultSectionSize(21);

        verticalLayout_6->addWidget(tableWidget_material);


        horizontalLayout_5->addLayout(verticalLayout_6);


        gridLayout_6->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_file = new QLineEdit(tab_2);
        lineEdit_file->setObjectName(QStringLiteral("lineEdit_file"));

        horizontalLayout_3->addWidget(lineEdit_file);

        toolButton_open = new QToolButton(tab_2);
        toolButton_open->setObjectName(QStringLiteral("toolButton_open"));
        toolButton_open->setMinimumSize(QSize(30, 30));
        toolButton_open->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(toolButton_open);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_menuI = new QGroupBox(tab_2);
        groupBox_menuI->setObjectName(QStringLiteral("groupBox_menuI"));
        gridLayout_4 = new QGridLayout(groupBox_menuI);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        toolButton_remLine = new QToolButton(groupBox_menuI);
        toolButton_remLine->setObjectName(QStringLiteral("toolButton_remLine"));
        toolButton_remLine->setMinimumSize(QSize(30, 30));
        toolButton_remLine->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_remLine);

        toolButton_clear = new QToolButton(groupBox_menuI);
        toolButton_clear->setObjectName(QStringLiteral("toolButton_clear"));
        toolButton_clear->setMinimumSize(QSize(30, 30));
        toolButton_clear->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_clear);

        toolButton_add = new QToolButton(groupBox_menuI);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(30, 30));
        toolButton_add->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_add);

        progressBar = new QProgressBar(groupBox_menuI);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(27, 0));
        progressBar->setMaximumSize(QSize(27, 16777215));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Vertical);

        verticalLayout_4->addWidget(progressBar);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_menuI);

        tableWidget_import = new QTableWidget(tab_2);
        if (tableWidget_import->columnCount() < 3)
            tableWidget_import->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_import->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_import->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_import->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        tableWidget_import->setObjectName(QStringLiteral("tableWidget_import"));
        tableWidget_import->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_import->setAlternatingRowColors(true);
        tableWidget_import->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidget_import->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_import->setSortingEnabled(true);
        tableWidget_import->horizontalHeader()->setStretchLastSection(true);
        tableWidget_import->verticalHeader()->setDefaultSectionSize(21);

        horizontalLayout_4->addWidget(tableWidget_import);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        label_status = new QLabel(material);
        label_status->setObjectName(QStringLiteral("label_status"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_status->setFont(font);
        label_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_status);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(material);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(material);
    } // setupUi

    void retranslateUi(QWidget *material)
    {
        material->setWindowTitle(QApplication::translate("material", "Form", 0));
        groupBox_menuM->setTitle(QString());
        toolButton_addM->setText(QApplication::translate("material", "+", 0));
        toolButton_delM->setText(QApplication::translate("material", "-", 0));
        toolButton_updM->setText(QApplication::translate("material", "U", 0));
        groupBox_card->setTitle(QString());
        label_2->setText(QApplication::translate("material", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", 0));
        label->setText(QApplication::translate("material", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273:", 0));
        label_3->setText(QApplication::translate("material", "\320\225\320\264.\320\270\320\267\320\274.", 0));
        pushButton_save->setText(QApplication::translate("material", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_close->setText(QApplication::translate("material", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_material->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("material", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_material->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("material", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_material->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("material", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_material->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("material", "\320\225\320\264. \320\270\320\267\320\274.", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_material->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("material", "x", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("material", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273\321\213", 0));
        label_4->setText(QApplication::translate("material", "\320\244\320\260\320\271\320\273:", 0));
        toolButton_open->setText(QApplication::translate("material", "...", 0));
        groupBox_menuI->setTitle(QString());
        toolButton_remLine->setText(QApplication::translate("material", "-", 0));
        toolButton_clear->setText(QApplication::translate("material", "X", 0));
        toolButton_add->setText(QApplication::translate("material", "DB", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_import->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("material", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_import->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("material", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_import->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("material", "\320\225\320\264. \320\270\320\267\320\274.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("material", "\320\230\320\274\320\277\320\276\321\200\321\202", 0));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class material: public Ui_material {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIAL_H
