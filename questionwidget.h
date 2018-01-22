#ifndef QUESTIONWIDGET_H
#define QUESTIONWIDGET_H

#include <QLabel>

namespace Ui {
class QuestionWidget;
}

class QuestionWidget : public QLabel
{
    Q_OBJECT

public:
    explicit QuestionWidget(QWidget *parent = 0);
    ~QuestionWidget();

protected:
    void resizeEvent(QResizeEvent *event);

private:
    Ui::QuestionWidget *ui;
};

#endif // QUESTIONWIDGET_H
