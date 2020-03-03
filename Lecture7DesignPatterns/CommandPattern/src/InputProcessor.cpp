#include "InputProcessor.h"


Command* InputProcessor::handleInput(Moves _m)
{
  Command *ret;
  // return the concrete type for the move
  switch(_m)
  {
    case Moves::WALK : ret=m_walk.get(); break;
    case Moves::RUN : ret=m_run.get(); break;
    case Moves::LEFT : ret=m_left.get(); break;
    case Moves::UP : ret=m_up.get(); break;
    case Moves::DOWN : ret=m_down.get(); break;
    case Moves::RIGHT : ret=m_right.get(); break;
    default: ret=nullptr; break;
  }

  return ret;
}
