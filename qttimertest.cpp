#include "qttimertest.hpp"
#include "ui_qttimertest.h"

QtTimerTest::QtTimerTest(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::QtTimerTest)
{
  ui->setupUi(this);
}

QtTimerTest::~QtTimerTest()
{
  delete ui;
}
