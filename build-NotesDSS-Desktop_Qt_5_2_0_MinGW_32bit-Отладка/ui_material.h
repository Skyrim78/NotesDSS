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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_card;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget_material;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_file;
    QToolButton *toolButton_open;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_menu;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QToolButton *toolButton_remLine;
    QToolButton *toolButton_clear;
    QToolButton *toolButton_add;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget_import;
    QLabel *label_status;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(743, 543);
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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

        lineEdit = new QLineEdit(groupBox_card);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox_card);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_2 = new QLineEdit(groupBox_card);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(lineEdit_2);

        label_3 = new QLabel(groupBox_card);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(groupBox_card);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox_card);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_card);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_card);

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

        verticalLayout_3->addWidget(tableWidget_material);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

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
        groupBox_menu = new QGroupBox(tab_2);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        gridLayout_4 = new QGridLayout(groupBox_menu);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        toolButton_remLine = new QToolButton(groupBox_menu);
        toolButton_remLine->setObjectName(QStringLiteral("toolButton_remLine"));
        toolButton_remLine->setMinimumSize(QSize(30, 30));
        toolButton_remLine->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_remLine);

        toolButton_clear = new QToolButton(groupBox_menu);
        toolButton_clear->setObjectName(QStringLiteral("toolButton_clear"));
        toolButton_clear->setMinimumSize(QSize(30, 30));
        toolButton_clear->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_clear);

        toolButton_add = new QToolButton(groupBox_menu);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(30, 30));
        toolButton_add->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_add);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_menu);

        tableWidget_import = new QTableWidget(tab_2);
        tableWidget_import->setObjectName(QStringLiteral("tableWidget_import"));

        horizontalLayout_4->addWidget(tableWidget_import);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        label_status = new QLabel(Form);
        label_status->setObjectName(QStringLiteral("label_status"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_status->setFont(font);
        label_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_status);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        groupBox_card->setTitle(QString());
        label_2->setText(QApplication::translate("Form", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", 0));
        label->setText(QApplication::translate("Form", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273:", 0));
        label_3->setText(QApplication::translate("Form", "\320\225\320\264.\320\270\320\267\320\274.", 0));
        pushButton->setText(QApplication::translate("Form", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("Form", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_material->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_material->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_material->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Form", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_material->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Form", "\320\225\320\264. \320\270\320\267\320\274.", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_material->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Form", "x", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273\321\213", 0));
        label_4->setText(QApplication::translate("Form", "\320\244\320\260\320\271\320\273:", 0));
        toolButton_open->setText(QApplication::translate("Form", "...", 0));
        groupBox_menu->setTitle(QString());
        toolButton_remLine->setText(QApplication::translate("Form", "-", 0));
        toolButton_clear->setText(QApplication::translate("Form", "X", 0));
        toolButton_add->setText(QApplication::translate("Form", "DB", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "\320\230\320\274\320\277\320\276\321\200\321\202", 0));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIAL_H
