#include <iostream>
#include <cstdlib>


int main()
{
 auto lambda =[](const char *_s) { std::cout<<"lambda :-"<<_s<<'\n';};
 auto lambda2 =[](int _s) { std::cout<<"lambda :-"<<_s<<'\n';};
 
 lambda("this is a lambda");
 lambda("seems to ");
 lambda("work ok");
 lambda("work ok");
 lambda2(5);
 
 
	return EXIT_SUCCESS;
}