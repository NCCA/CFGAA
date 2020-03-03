#include <iostream>
#include <bitset>
#include <cstdlib>
#include <string>

int main (void)
{
	std::bitset<8> first(std::string("101101101"));
	std::bitset<8> second(std::string("00011001"));

	std::cout <<first<<std::endl;
	std::cout <<second<<std::endl;
	first[1]=0;
	std::cout << "|" <<(first | second)<<std::endl;
	std::cout << "&" <<(first & second)<<std::endl;
	std::cout << "^" <<(first ^ second)<<std::endl;

	return EXIT_SUCCESS;
}