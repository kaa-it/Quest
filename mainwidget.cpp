#include "mainwidget.h"
#include "welcomewidget.h"
#include "questionwidget.h"

#include <QtWidgets>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent)
{
    auto welcomeWidget = new WelcomeWidget(this);
    auto questionWidget = new QuestionWidget(this);

    connect(welcomeWidget, &WelcomeWidget::questStarted,
            this, &MainWidget::onQuestStarted);

    auto layout = new QStackedLayout();
    layout->addWidget(welcomeWidget);
    layout->addWidget(questionWidget);

    layout->setCurrentIndex(0);

    setLayout(layout);

    setWindowTitle(tr("Лабиринт. В поисках здоровых продуктов"));

    //setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);

    //setWindowState(windowState() & ~Qt::WindowMaximized);
}

MainWidget::~MainWidget()
{

}

void MainWidget::onQuestStarted()
{
    qobject_cast<QStackedLayout*>(layout())->setCurrentIndex(1);
}


