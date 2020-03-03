#ifndef DIVOBSERVER_H_
#define DIVOBSERVER_H_

#include "Subject.h"
#include "Observer.h"
#include <iostream>

class DivObserver: public Observer
{
  public:
    DivObserver(std::shared_ptr<Subject> _mod, int _div): Observer(_mod, _div){}
    virtual ~DivObserver() {}
    void update()
    {
        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " div " << d << " is " << v / d << '\n';
    }
};

#endif
