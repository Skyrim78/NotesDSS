/********************************************************************************
** Form generated from reading UI file 'columnsEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNSEDITOR_H
#define UI_COLUMNSEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_column;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QPushButton *pushButton_close;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(279, 425);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget_column = new QListWidget(Dialog);
        listWidget_column->setObjectName(QStringLiteral("listWidget_column"));
        QFont font;
        font.setPointSize(10);
        listWidget_column->setFont(font);
        listWidget_column->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget_column->setAlternatingRowColors(true);
        listWidget_column->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_column->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget_column->setSelectionRectVisible(false);

        verticalLayout->addWidget(listWidget_column);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(Dialog);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout->addWidget(pushButton_save);

        pushButton_close = new QPushButton(Dialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        horizontalLayout->addWidget(pushButton_close);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\272\320\276\320\273\320\276\320\275\320\276\320\272", 0));
        pushButton_save->setText(QApplication::translate("Dialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        pushButton_close->setText(QApplication::translate("Dialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNSEDITOR_H
