/// See http://APIBook.com/ for the latest version.

#include "adapter.h"
#include "original.h"
#include <iostream>



Adapter::Adapter()
	: m_orig(new Original)
{
  std::cout << "Allocated new Original object inside Adapter\n";
}

Adapter::~Adapter()
{
	delete m_orig;
  std::cout << "Destroyed Original object inside Adapter\n";
}

bool Adapter::doSomething(int value)
{
  std::cout << "About to call Original::doOperation from Adapter::doSomething\n";
	m_orig->doOperation(value, true);
	return true;
}

