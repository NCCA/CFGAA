#ifndef TERMINALCOLOURS_H_
#define TERMINALCOLOURS_H_

#ifndef DISABLECOLOURS
  #define NORMAL "\x1B[0m"
  #define RED "\x1B[31m"
  #define GREEN "\x1B[32m"
  #define YELLOW "\x1B[33m"
  #define BLUE  "\x1B[34m"
  #define MAGENTA "\x1B[35m"
  #define CYAN "\x1B[36m"
  #define WHITE "\x1B[37m"
  #define RESET "\033[0m"
#else
  #define NORMAL ""
  #define RED ""
  #define GREEN ""
  #define YELLOW ""
  #define BLUE  ""
  #define MAGENTA ""
  #define CYAN ""
  #define WHITE ""
  #define RESET ""
#endif // !DISABLECOLOURS

#else


#endif