#include <QDebug>

#include "ctrlbar.h"
#include "ui_ctrlbar.h"

#include "globalhelper.h"

CtrlBar::CtrlBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlBar)
{
    ui->setupUi(this);

    QString qss = GlobalHelper::GetQssStr(":/qss/ctrlbar.qss");
    qDebug() << qss;
    setStyleSheet(GlobalHelper::GetQssStr(":/qss/ctrlbar.qss"));
}

CtrlBar::~CtrlBar()
{
    delete ui;
}
