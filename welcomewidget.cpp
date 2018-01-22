#include "welcomewidget.h"
#include "ui_welcomewidget.h"

#include <QtWidgets>

WelcomeWidget::WelcomeWidget(QWidget *parent) :
    QLabel(parent),
    ui(new Ui::WelcomeWidget)
{
    ui->setupUi(this);

    ui->label->setStyleSheet("background-color: rgba(0,0,0,0)");
    //ui->pushButton->setWindowOpacity(0.0);

    auto fontInfo = font();
    fontInfo.setPointSize(14);
    setFont(fontInfo);

    ui->label->setFont(fontInfo);
    ui->commandLinkButton->setFont(fontInfo);

    connect(ui->commandLinkButton, &QCommandLinkButton::clicked,
            this, &WelcomeWidget::startClicked);

    //showMaximized();

    //auto currScreenGeometry = QApplication::desktop()->screenGeometry(this);

    QPixmap bkgnd(":/images/images/round_stone_15.JPG");
    bkgnd = bkgnd.scaled(parent->width(),
                         parent->height(), Qt::IgnoreAspectRatio);
    setPixmap(bkgnd);
}

WelcomeWidget::~WelcomeWidget()
{
    delete ui;
}

void WelcomeWidget::resizeEvent(QResizeEvent *event)
{
    QPixmap bkgnd(":/images/images/round_stone_15.JPG");
    bkgnd = bkgnd.scaled(event->size(), Qt::IgnoreAspectRatio);
    setPixmap(bkgnd);
}

void WelcomeWidget::startClicked()
{
    emit questStarted();
}
