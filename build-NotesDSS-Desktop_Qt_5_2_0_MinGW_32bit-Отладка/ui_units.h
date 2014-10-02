/********************************************************************************
** Form generated from reading UI file 'units.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITS_H
#define UI_UNITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_units
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_menu;
    QGridLayout *gridLayout;
    QToolButton *toolButton_update;
    QToolButton *toolButton_add;
    QToolButton *toolButton_del;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_units;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QPushButton *pushButton_close;
    QTableWidget *tableWidget_units;
    QLabel *label_status;

    void setupUi(QWidget *units)
    {
        if (units->objectName().isEmpty())
            units->setObjectName(QStringLiteral("units"));
        units->resize(759, 483);
        gridLayout_3 = new QGridLayout(units);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_menu = new QGroupBox(units);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        gridLayout = new QGridLayout(groupBox_menu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolButton_update = new QToolButton(groupBox_menu);
        toolButton_update->setObjectName(QStringLiteral("toolButton_update"));
        toolButton_update->setMinimumSize(QSize(30, 30));
        toolButton_update->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_update, 0, 0, 1, 1);

        toolButton_add = new QToolButton(groupBox_menu);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(30, 30));
        toolButton_add->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_add, 1, 0, 1, 1);

        toolButton_del = new QToolButton(groupBox_menu);
        toolButton_del->setObjectName(QStringLiteral("toolButton_del"));
        toolButton_del->setMinimumSize(QSize(30, 30));
        toolButton_del->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_del, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_menu);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_units = new QGroupBox(units);
        groupBox_units->setObjectName(QStringLiteral("groupBox_units"));
        gridLayout_2 = new QGridLayout(groupBox_units);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_units);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox_units);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(200, 0));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(groupBox_units);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout_2->addWidget(pushButton_save);

        pushButton_close = new QPushButton(groupBox_units);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        horizontalLayout_2->addWidget(pushButton_close);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_units);

        tableWidget_units = new QTableWidget(units);
        if (tableWidget_units->columnCount() < 3)
            tableWidget_units->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_units->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_units->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_units->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_units->setObjectName(QStringLiteral("tableWidget_units"));
        tableWidget_units->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_units->setAlternatingRowColors(true);
        tableWidget_units->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_units->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_units->setSortingEnabled(true);
        tableWidget_units->horizontalHeader()->setStretchLastSection(true);
        tableWidget_units->verticalHeader()->setDefaultSectionSize(23);

        verticalLayout_2->addWidget(tableWidget_units);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_status = new QLabel(units);
        label_status->setObjectName(QStringLiteral("label_status"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_status->setFont(font);
        label_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_status);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(units);

        QMetaObject::connectSlotsByName(units);
    } // setupUi

    void retranslateUi(QWidget *units)
    {
        units->setWindowTitle(QApplication::translate("units", "Form", 0));
        groupBox_menu->setTitle(QString());
        toolButton_update->setText(QApplication::translate("units", "U", 0));
        toolButton_add->setText(QApplication::translate("units", "+", 0));
        toolButton_del->setText(QApplication::translate("units", "-", 0));
        groupBox_units->setTitle(QString());
        label->setText(QApplication::translate("units", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", 0));
        pushButton_save->setText(QApplication::translate("units", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_close->setText(QApplication::translate("units", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_units->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("units", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_units->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("units", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_units->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("units", "c", 0));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class units: public Ui_units {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNITS_H
