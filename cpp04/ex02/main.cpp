#include "animals.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	// Test pour abstract class :
	// Cat		cat;
	// Animal	animal;
	return (0);
}