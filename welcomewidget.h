#ifndef WELCOMEWIDGET_H
#define WELCOMEWIDGET_H

#include <QLabel>

namespace Ui {
class WelcomeWidget;
}

class WelcomeWidget : public QLabel
{
    Q_OBJECT

public:
    explicit WelcomeWidget(QWidget* parent = 0);
    ~WelcomeWidget();

signals:
    void  questStarted();

protected:
    void resizeEvent(QResizeEvent* event);

private slots:
    void startClicked();

private:
    Ui::WelcomeWidget *ui;
};

#endif // WELCOMEWIDGET_H
