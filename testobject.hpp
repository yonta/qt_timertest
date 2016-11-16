#ifndef TESTGPIO_HPP
#define TESTGPIO_HPP

#include <QObject>
#include <QTimer>

class TestObject : public QObject {
  Q_OBJECT

public:
  explicit TestObject(QObject *parent = Q_NULLPTR);
  ~TestObject();

  void startTimer();
  void stopTimer();

private slots:
  void work();

private:
  QTimer timer;
};

#endif // TESTGPIO_HPP
