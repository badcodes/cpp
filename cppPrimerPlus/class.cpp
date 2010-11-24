#include "class_greeting.h"

int main(void)
{
	Greeting you;
	you.say();
	Greeting lin = Greeting("Andy Lou");
	lin.say();
	return 0;
}
