#include <iostream>

// abstract game state
class GameState
{
  public :
    virtual void draw()=0;
    virtual void init()=0;
    virtual void nextState()=0;
    void setState(GameState *_s){m_state=_s;}
    inline void setScore(int _i){m_score=_i;}
    inline int getScore() const {return m_score;}
    inline void setHighScore(int _i){m_highScore=_i;}
    inline int getHighScore() const {return m_highScore;}

private :
    GameState *m_state;
protected :
    static int m_score;
    static int m_highScore;
};

int GameState::m_highScore=0;
int GameState::m_score=0;

class GamePlay;
class GameOver;
class MainMenu;


class Game
{
  public :
  Game(int score);
  void draw(){ m_state->draw(); }
  void update(){ m_state->nextState(); }
  inline void setScore(int _i){m_state->setScore(_i);}
  ~Game(){ std::cout<<"game dtor\n"; }
  private :
    GameState *m_state;
};


class MainMenu : public GameState
{
  public :
    MainMenu(){ this->init();}
    virtual ~MainMenu(){std::cout<<"Main menu dtor\n";}
    void init() { std::cout<<"main Menu init\n"; }
    void draw() { std::cout<<"main menu draw\n"; }
    void nextState();
};


Game::Game(int _score)
{
  m_state= new MainMenu;
  m_state->setScore(0);
  m_state->setHighScore(_score);
}

class GamePlay : public GameState
{
  public :
    GamePlay(){ this->init();}
    virtual ~GamePlay(){std::cout<<"GamePlay dtor\n";}
    void init() { std::cout<<"GamePlay init\n"; }
    void draw() { std::cout<<"GamePlay draw\n"; }
    void nextState();

};

class GameOver : public GameState
{
  public :
    GameOver(){ this->init();}
    virtual ~GameOver(){std::cout<<"GameOver dtor\n";}

    void init() { std::cout<<"GameOver init\n"; }
    void draw() { std::cout<<"GameOver draw\n"; }
    void nextState();
};

class HighScore : public GameState
{
  public :
    HighScore(){ this->init();}
    virtual ~HighScore(){std::cout<<"HighScore dtor\n";}

    void init() { std::cout<<"////// HighScore init ///////\n"; }
    void draw() { std::cout<<"////// HighScore draw ///////\n"; }
    void nextState();
};

void MainMenu::nextState()
{
  setState(new GamePlay);
  delete this;
}

void GamePlay::nextState()
{
  setState(new GameOver);
  delete this;
}

void GameOver::nextState()
{
  std::cout<<"score is "<<m_score<<"\n";
  if(m_score > m_highScore)
  {
    m_highScore=m_score;
    setState(new HighScore);
  }
  else
  {
    setState(new MainMenu);
  }
  delete this;
}

void HighScore::nextState()
{

  setState(new MainMenu);
  delete this;
}

