#include "animals.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "================================" << std::endl;
	const wrongAnimal* wrongMeta = new wrongAnimal();
	const wrongAnimal* wrongJ = new wrongDog();
	const wrongAnimal* wrongI = new wrongCat();

	std::cout << wrongJ->getType() << " " << std::endl;
	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); //will output the cat sound!
	wrongJ->makeSound();
	wrongMeta->makeSound();
	return (0);
}