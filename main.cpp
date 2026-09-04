#include <iostream>

void hello_world()
{

	std::cout << "hello world\n";
}

int main()
{
	//void (*funcPtr)();

	( (void (*)()) hello_world)();
        
	return 0;
}
