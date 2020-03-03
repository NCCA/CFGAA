#ifndef MODOBSERVER_H_
#define MODOBSERVER_H_

#include "Observer.h"
#include <iostream>

class ModObserver: public Observer
{
  public:
    ModObserver(std::shared_ptr<Subject> _mod, int _div): Observer(_mod, _div){}
    void update()
    {
        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " mod " << d << " is " << v % d << '\n';
    }
};

#endif
