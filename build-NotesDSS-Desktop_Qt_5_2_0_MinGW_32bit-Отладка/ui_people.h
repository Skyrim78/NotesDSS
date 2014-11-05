/********************************************************************************
** Form generated from reading UI file 'people.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_H
#define UI_PEOPLE_H

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

class Ui_people
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_menu;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_add;
    QToolButton *toolButton_del;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_card;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_fam;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QLabel *label_3;
    QLineEdit *lineEdit_otc;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_face;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QPushButton *pushButton_close;
    QTableWidget *tableWidget_people;
    QLabel *label_status;

    void setupUi(QWidget *people)
    {
        if (people->objectName().isEmpty())
            people->setObjectName(QStringLiteral("people"));
        people->resize(718, 534);
        gridLayout_3 = new QGridLayout(people);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_menu = new QGroupBox(people);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        gridLayout = new QGridLayout(groupBox_menu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolButton_add = new QToolButton(groupBox_menu);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(30, 30));
        toolButton_add->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(toolButton_add);

        toolButton_del = new QToolButton(groupBox_menu);
        toolButton_del->setObjectName(QStringLiteral("toolButton_del"));
        toolButton_del->setMinimumSize(QSize(30, 30));
        toolButton_del->setMaximumSize(QSize(30, 30));

        verticalLayout->addWidget(toolButton_del);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_menu);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_card = new QGroupBox(people);
        groupBox_card->setObjectName(QStringLiteral("groupBox_card"));
        gridLayout_2 = new QGridLayout(groupBox_card);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_card);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_fam = new QLineEdit(groupBox_card);
        lineEdit_fam->setObjectName(QStringLiteral("lineEdit_fam"));

        horizontalLayout->addWidget(lineEdit_fam);

        label_2 = new QLabel(groupBox_card);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_name = new QLineEdit(groupBox_card);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);

        label_3 = new QLabel(groupBox_card);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_otc = new QLineEdit(groupBox_card);
        lineEdit_otc->setObjectName(QStringLiteral("lineEdit_otc"));

        horizontalLayout->addWidget(lineEdit_otc);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_card);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_face = new QLineEdit(groupBox_card);
        lineEdit_face->setObjectName(QStringLiteral("lineEdit_face"));
        lineEdit_face->setMaximumSize(QSize(150, 16777215));
        lineEdit_face->setFocusPolicy(Qt::NoFocus);
        lineEdit_face->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_face);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(groupBox_card);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout_2->addWidget(pushButton_save);

        pushButton_close = new QPushButton(groupBox_card);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        horizontalLayout_2->addWidget(pushButton_close);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_card);

        tableWidget_people = new QTableWidget(people);
        if (tableWidget_people->columnCount() < 3)
            tableWidget_people->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_people->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_people->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_people->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_people->setObjectName(QStringLiteral("tableWidget_people"));
        tableWidget_people->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_people->setAlternatingRowColors(true);
        tableWidget_people->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_people->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_people->setSortingEnabled(true);
        tableWidget_people->horizontalHeader()->setStretchLastSection(true);
        tableWidget_people->verticalHeader()->setDefaultSectionSize(21);

        verticalLayout_2->addWidget(tableWidget_people);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_status = new QLabel(people);
        label_status->setObjectName(QStringLiteral("label_status"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_status->setFont(font);
        label_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_status);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(people);

        QMetaObject::connectSlotsByName(people);
    } // setupUi

    void retranslateUi(QWidget *people)
    {
        people->setWindowTitle(QApplication::translate("people", "Form", 0));
        groupBox_menu->setTitle(QString());
        toolButton_add->setText(QApplication::translate("people", "+", 0));
        toolButton_del->setText(QApplication::translate("people", "-", 0));
        groupBox_card->setTitle(QString());
        label->setText(QApplication::translate("people", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", 0));
        label_2->setText(QApplication::translate("people", "\320\230\320\274\321\217", 0));
        label_3->setText(QApplication::translate("people", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        label_4->setText(QApplication::translate("people", "\320\233\320\270\321\206\320\276", 0));
        pushButton_save->setText(QApplication::translate("people", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_close->setText(QApplication::translate("people", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_people->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("people", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_people->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("people", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\230\320\274\321\217 \320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_people->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("people", "docs", 0));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class people: public Ui_people {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_H
