#include <iostream>
#include <cstdlib>

#include "Global.h"

Global *data=Global::Instance();

void SetData()
{
data->setName("Jon");
data->setAge(39);
}

void PrintData()
{
std::cout<<"Name = "<<data->getName()<<"\n";
std::cout<<"Age = "<<data->getAge()<<"\n";

}
int main()
{
SetData();
PrintData();

return EXIT_SUCCESS;
}