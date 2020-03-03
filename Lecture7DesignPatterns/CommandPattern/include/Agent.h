// based on discussions here
// http://gameprogrammingpatterns.com/command.html
#ifndef AGENT_H_
#define AGENT_H_
#include <string>
typedef struct
{
  float x;
  float y;
}Point2;


class Agent
{
  public :
    Agent(Point2 _pos,const std::string &_name) :
      m_pos(_pos),
      m_speed(1.0f),
      m_name(_name){}

    void run();
    void walk();
    void up();
    void down();
    void left();
    void right();
    void debug() const;
  private :
    Point2 m_pos;
    float m_speed;
    std::string m_name;
};



#endif
