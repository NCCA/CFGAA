#include <iostream>

enum class DIRECTION {UP,DOWN,LEFT,RIGHT};


int main()
{
    int data[4]={0,1,2,3};
    std::cout<<data[static_cast<int>(DIRECTION::UP)]<<'\n';
}