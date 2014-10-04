/********************************************************************************
** Form generated from reading UI file 'firms.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRMS_H
#define UI_FIRMS_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firms
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_form;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_inn;
    QLabel *label_2;
    QLineEdit *lineEdit_address;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_phone;
    QLabel *label_4;
    QLineEdit *lineEdit_mail;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_face;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_bank;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_rs;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_okpo;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit_note;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_close;
    QTableWidget *tableWidget_firms;
    QLabel *label_status;
    QGroupBox *groupBox_menu;
    QGridLayout *gridLayout_5;
    QToolButton *toolButton_add;
    QToolButton *toolButton_del;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *firms)
    {
        if (firms->objectName().isEmpty())
            firms->setObjectName(QStringLiteral("firms"));
        firms->resize(527, 535);
        gridLayout_6 = new QGridLayout(firms);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_form = new QGroupBox(firms);
        groupBox_form->setObjectName(QStringLiteral("groupBox_form"));
        groupBox_form->setMinimumSize(QSize(0, 200));
        groupBox_form->setMaximumSize(QSize(16777215, 200));
        gridLayout_4 = new QGridLayout(groupBox_form);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidget = new QTabWidget(groupBox_form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_name = new QLineEdit(tab);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_inn = new QLineEdit(tab);
        lineEdit_inn->setObjectName(QStringLiteral("lineEdit_inn"));
        lineEdit_inn->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(lineEdit_inn);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_address = new QLineEdit(tab);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));

        horizontalLayout_2->addWidget(lineEdit_address);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_phone = new QLineEdit(tab);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));

        horizontalLayout_3->addWidget(lineEdit_phone);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_mail = new QLineEdit(tab);
        lineEdit_mail->setObjectName(QStringLiteral("lineEdit_mail"));

        horizontalLayout_3->addWidget(lineEdit_mail);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        lineEdit_face = new QLineEdit(tab);
        lineEdit_face->setObjectName(QStringLiteral("lineEdit_face"));

        horizontalLayout_4->addWidget(lineEdit_face);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        label->raise();
        lineEdit_name->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_bank = new QLineEdit(tab_2);
        lineEdit_bank->setObjectName(QStringLiteral("lineEdit_bank"));

        horizontalLayout_6->addWidget(lineEdit_bank);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit_rs = new QLineEdit(tab_2);
        lineEdit_rs->setObjectName(QStringLiteral("lineEdit_rs"));

        horizontalLayout_8->addWidget(lineEdit_rs);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        lineEdit_okpo = new QLineEdit(tab_2);
        lineEdit_okpo->setObjectName(QStringLiteral("lineEdit_okpo"));

        horizontalLayout_7->addWidget(lineEdit_okpo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textEdit_note = new QTextEdit(tab_3);
        textEdit_note->setObjectName(QStringLiteral("textEdit_note"));

        gridLayout_3->addWidget(textEdit_note, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_save = new QPushButton(groupBox_form);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        gridLayout_4->addWidget(pushButton_save, 1, 1, 1, 1);

        pushButton_close = new QPushButton(groupBox_form);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        gridLayout_4->addWidget(pushButton_close, 1, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_form, 0, 1, 1, 1);

        tableWidget_firms = new QTableWidget(firms);
        if (tableWidget_firms->columnCount() < 11)
            tableWidget_firms->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_firms->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidget_firms->setObjectName(QStringLiteral("tableWidget_firms"));

        gridLayout_6->addWidget(tableWidget_firms, 1, 1, 1, 1);

        label_status = new QLabel(firms);
        label_status->setObjectName(QStringLiteral("label_status"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_status->setFont(font);
        label_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_status->setWordWrap(true);

        gridLayout_6->addWidget(label_status, 2, 0, 1, 2);

        groupBox_menu = new QGroupBox(firms);
        groupBox_menu->setObjectName(QStringLiteral("groupBox_menu"));
        gridLayout_5 = new QGridLayout(groupBox_menu);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        toolButton_add = new QToolButton(groupBox_menu);
        toolButton_add->setObjectName(QStringLiteral("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(30, 30));
        toolButton_add->setMaximumSize(QSize(30, 30));

        gridLayout_5->addWidget(toolButton_add, 0, 0, 1, 1);

        toolButton_del = new QToolButton(groupBox_menu);
        toolButton_del->setObjectName(QStringLiteral("toolButton_del"));
        toolButton_del->setMinimumSize(QSize(30, 30));
        toolButton_del->setMaximumSize(QSize(30, 30));

        gridLayout_5->addWidget(toolButton_del, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 403, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 2, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_menu, 0, 0, 2, 1);


        retranslateUi(firms);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(firms);
    } // setupUi

    void retranslateUi(QWidget *firms)
    {
        firms->setWindowTitle(QApplication::translate("firms", "Form", 0));
        groupBox_form->setTitle(QString());
        label->setText(QApplication::translate("firms", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", 0));
        label_7->setText(QApplication::translate("firms", "\320\230\320\235\320\235", 0));
        lineEdit_inn->setText(QString());
        label_2->setText(QApplication::translate("firms", "\320\220\320\264\321\200\320\265\321\201:", 0));
        label_3->setText(QApplication::translate("firms", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275:", 0));
        label_4->setText(QApplication::translate("firms", "E-mail:", 0));
        label_9->setText(QApplication::translate("firms", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\320\276\320\265 \320\273\320\270\321\206\320\276:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("firms", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", 0));
        label_5->setText(QApplication::translate("firms", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", 0));
        label_6->setText(QApplication::translate("firms", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\201\321\207\320\265\321\202:", 0));
        label_8->setText(QApplication::translate("firms", "\320\236\320\232\320\237\320\236", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("firms", "\320\221\320\260\320\275\320\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("firms", "\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\320\265", 0));
        pushButton_save->setText(QApplication::translate("firms", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_close->setText(QApplication::translate("firms", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_firms->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("firms", "id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_firms->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("firms", "\320\230\320\235\320\235", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_firms->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("firms", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_firms->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("firms", "\320\220\320\264\321\200\320\265\321\201", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_firms->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("firms", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\320\276\320\265 \320\273\320\270\321\206\320\276", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_firms->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("firms", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_firms->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("firms", "E-mail", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_firms->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("firms", "\320\221\320\260\320\275\320\272", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_firms->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("firms", "\320\241\321\207\320\265\321\202", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_firms->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("firms", "\320\236\320\232\320\237\320\236", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_firms->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("firms", "\321\201", 0));
        label_status->setText(QString());
        groupBox_menu->setTitle(QString());
        toolButton_add->setText(QApplication::translate("firms", "+", 0));
        toolButton_del->setText(QApplication::translate("firms", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class firms: public Ui_firms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRMS_H
