#include "Base.hpp"

Base * generate(void)
{
	int random;
	srand (time(NULL));
	random = rand() % 3;
	if (random == 0)
		return static_cast<Base *>(new A());
	if (random == 1)
		return static_cast<Base *>(new B());
	if (random == 2)
		return static_cast<Base *>(new C());
	return (NULL);
}

void identify(Base * p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
}

void identify( Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		C & c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
	}
}