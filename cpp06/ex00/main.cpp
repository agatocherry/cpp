#include "main.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		convert(argv[1]);
	}
	else
		std::cout << "Please, give me an argument." << std::endl;
	return (0);
}