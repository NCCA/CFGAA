#include <iostream>

enum class Mesh {SPHERE,BOX,TORUS};
enum class Shapes {CUBE,CYLINDER,SPHERE};

int main()
{
	Shapes shape=Shapes::CUBE;
	if( shape == Shapes::CUBE)
	{
		std::cout<<"cube\n";
	}
}