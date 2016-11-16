#include "testobject.hpp"
#include <QDebug>

TestObject::TestObject(QObject *parent) : QObject(parent), timer(this)
{
  timer.setInterval(1000);
  connect(&timer, SIGNAL(timeout()), this, SLOT(work()));
}

TestObject::~TestObject() { }

void TestObject::startTimer()
{
  timer.start();
}

void TestObject::stopTimer()
{
  timer.stop();
}

void TestObject::work()
{
  qDebug() << "Timed!!";
}
