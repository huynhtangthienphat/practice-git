#include <iostream>

void hello_world()
{
	std::cout << "hello \n";
}

int main()
{
	//void (*funcPtr)();

	( (void (*)()) hello_world)();

	return 0;
}
