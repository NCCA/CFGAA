#include "Composite.h"

int main()
{
  //Create a Tree Structure
  CompositeElement* root = new CompositeElement("Picture");
  root->Add(new PrimitiveElement("Red Line"));
  root->Add(new PrimitiveElement("Blue Circle"));
  root->Add(new PrimitiveElement("Green Box"));

  //Create a Branch
  CompositeElement* comp = new CompositeElement("Two Circles");
  comp->Add(new PrimitiveElement("Black Circle"));
  comp->Add(new PrimitiveElement("White Circle"));
  root->Add(comp);
  comp = new CompositeElement("new ");
  comp->Add(new PrimitiveElement("Red Line"));
  comp->Add(new PrimitiveElement("Blue Circle"));
  comp->Add(new PrimitiveElement("Green Box"));



  //Add and remove a primitive elements
  PrimitiveElement* pe1 = new PrimitiveElement("Yellow Line");
  root->Add(pe1);
  PrimitiveElement* pe2 = new PrimitiveElement("Orange Triangle");
  root->Add(pe2);
  root->Remove(pe2);

  //Recursively display nodes
  root->Display(1);

  //delete the allocated memory
  delete root;

  return 0;
}
