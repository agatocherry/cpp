#include "iter.hpp"

void putnbr(int nb)
{
	std::cout << nb;
}

void putchar(char c)
{
	std::cout << c;
}

void putstr(std::string str)
{
	std::cout << str;
}

int	main(void)
{
	int arrayInt[] = {4, 2};
	iter(arrayInt, 2, print);
	std::cout << std::endl;
	char arrayChar[] = {'h', 'e', 'l', 'l', 'o'};
	::iter(arrayChar, 5, print);
	std::cout << std::endl;
	std::string arrayStr[] = {"how", "are", "you ?"};
	::iter(arrayStr, 3, print);
	std::cout << std::endl;
	return (0);
}