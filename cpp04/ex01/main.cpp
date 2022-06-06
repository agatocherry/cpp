#include "animals.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;
	std::cout << "================================================" << std::endl;
	int	nbList = 5;
	int count = 0;
	const Animal* list[nbList];
	while (count < nbList)
	{
		if (count < (nbList / 2))
			list[count] = new Dog();
		if (count >= (nbList / 2))
			list[count] = new Cat();
		count++;
	}
	count = 0;
	while (count < nbList)
	{
		delete list[count];
		count++;
	}
	return (0);
}