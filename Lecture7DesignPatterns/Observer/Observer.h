#ifndef OBSERVER_H_
#define OBSERVER_H_

#include "Subject.h"
#include <memory>

class Observer
{
  private :
    std::shared_ptr<Subject> m_subject;
    int m_denom;
  public:
    Observer(std::shared_ptr<Subject> _mod, int _div)
    {
        m_subject = _mod;
        m_denom = _div;
        m_subject->attach(this);
    }
    virtual void update() = 0;
    virtual ~Observer() {}
  protected:
    std::shared_ptr<Subject> getSubject() { return m_subject;}
    int getDivisor() const { return m_denom; }
};

#endif
