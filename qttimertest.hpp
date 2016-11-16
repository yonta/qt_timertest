#ifndef QTTIMERTEST_HPP
#define QTTIMERTEST_HPP

#include <QMainWindow>

namespace Ui {
class QtTimerTest;
}

class QtTimerTest : public QMainWindow
{
  Q_OBJECT

public:
  explicit QtTimerTest(QWidget *parent = 0);
  ~QtTimerTest();

private:
  Ui::QtTimerTest *ui;
};

#endif // QTTIMERTEST_HPP
