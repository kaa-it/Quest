#include "questionwidget.h"
#include "ui_questionwidget.h"

#include <QtWidgets>

QuestionWidget::QuestionWidget(QWidget *parent) :
    QLabel(parent),
    ui(new Ui::QuestionWidget)
{
    ui->setupUi(this);

    QPixmap bkgnd(":/images/images/wp-budapest-january-21.jpg");
    bkgnd = bkgnd.scaled(parent->width(),
                         parent->height(), Qt::IgnoreAspectRatio);
    setPixmap(bkgnd);
}

QuestionWidget::~QuestionWidget()
{
    delete ui;
}

void QuestionWidget::resizeEvent(QResizeEvent *event)
{
    QPixmap bkgnd(":/images/images/wp-budapest-january-21.jpg");
    bkgnd = bkgnd.scaled(event->size(), Qt::IgnoreAspectRatio);
    setPixmap(bkgnd);
}
