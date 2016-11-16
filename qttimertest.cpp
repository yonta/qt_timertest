#include "qttimertest.hpp"
#include "ui_qttimertest.h"
#include "testobject.hpp"

QtTimerTest::QtTimerTest(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::QtTimerTest),
  t(this)
{
  ui->setupUi(this);
}

QtTimerTest::~QtTimerTest()
{
  delete ui;
}

void QtTimerTest::on_buttonStart_clicked()
{
  t.startTimer();
}

void QtTimerTest::on_buttonStop_clicked()
{
  t.stopTimer();
}
