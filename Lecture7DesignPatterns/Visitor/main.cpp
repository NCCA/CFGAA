#include "Visitors.h"
#include <memory>
#include <array>
int main()
{

  std::array<std::unique_ptr<Element>,6>list =
  {
    {
    std::unique_ptr<Element>(new A),
      std::unique_ptr<Element>(new B),
      std::unique_ptr<Element>(new B),
      std::unique_ptr<Element>(new B),
    std::unique_ptr<Element>(new B),
    std::unique_ptr<Element>(new C)
    }
  };

  SomeOperation op;
  SomeOtherOp other;

  for (auto &l  : list)
    l->accept(op);
  for (auto &l : list)
    l->accept(other);

}
