#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include "easylogging++.h"

class MyThread : public QThread {
  Q_OBJECT
  public:
    MyThread(int id) : threadId(id) {}
  private:
    int threadId;

  protected:
    void run() {
      el::base::asyncDispatcher.run();
    }
};
#endif
