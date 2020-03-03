#include "DivObserver.h"
#include "ModObserver.h"
#include <memory>
int main()
{
  std::shared_ptr<Subject>subj(new Subject);
  DivObserver divObs1(subj, 4);
  DivObserver divObs2(subj, 3);
  ModObserver modObs3(subj, 3);
  ModObserver modObs4(subj, 3);
  ModObserver modObs5(subj, 13);
  ModObserver modObs6(subj, 23);
  ModObserver modObs7(subj, 33);
  ModObserver modObs8(subj, 43);
  subj->setVal(14);
  std::cout<<"now set the value again\n";
  for(int i=1; i<200; ++i)
  {
      std::cout<<"Notify\n";
      subj->setVal(i);
  }
}
