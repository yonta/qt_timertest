#include "qttimertest.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QtTimerTest w;
  w.show();

  return a.exec();
}
