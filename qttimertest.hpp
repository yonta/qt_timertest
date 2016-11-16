#ifndef QTTIMERTEST_HPP
#define QTTIMERTEST_HPP

#include <QMainWindow>
#include "testobject.hpp"

namespace Ui {
class QtTimerTest;
}

class QtTimerTest : public QMainWindow
{
  Q_OBJECT

public:
  explicit QtTimerTest(QWidget *parent = 0);
  ~QtTimerTest();

private slots:
  void on_buttonStart_clicked();

  void on_buttonStop_clicked();

private:
  Ui::QtTimerTest *ui;
  TestObject t;
};

#endif // QTTIMERTEST_HPP
