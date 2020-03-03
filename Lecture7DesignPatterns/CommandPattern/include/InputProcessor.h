// based on discussions here
// http://gameprogrammingpatterns.com/command.html
#ifndef INPUTPROCESSOR_H_
#define INPUTPROCESSOR_H_
#include "Command.h"
#include <memory>
// a simple enum for our agent modes
enum class Moves{RUN,WALK,UP,DOWN,LEFT,RIGHT};

class InputProcessor
{
public:
  InputProcessor() :
    m_walk(new WalkCommand),
    m_run(new RunCommand),
    m_left(new LeftCommand),
    m_right(new RightCommand),
    m_up(new UpCommand),
    m_down(new DownCommand){}

  Command* handleInput(Moves _m);
private:
  // as these are pointers use a smart pointer to store
  std::unique_ptr<Command> m_walk;
  std::unique_ptr<Command> m_run;
  std::unique_ptr<Command> m_left;
  std::unique_ptr<Command> m_right;
  std::unique_ptr<Command> m_up;
  std::unique_ptr<Command> m_down;
};


#endif
