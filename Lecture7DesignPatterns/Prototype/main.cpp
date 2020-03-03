#include <iostream>
#include <cstdlib>
#include "Prototype.h"
#include <memory>
int main()
{
  std::unique_ptr<Prototype> prototype( new ConcretePrototype(2));
  for (int i = 1; i < 10; ++i)
  {
    std::unique_ptr<ConcretePrototype> tempotype( dynamic_cast<ConcretePrototype*>(prototype->clone()));
    tempotype->setX(tempotype->getX() * i);
    tempotype->printX();
  }

  return EXIT_SUCCESS;
}
