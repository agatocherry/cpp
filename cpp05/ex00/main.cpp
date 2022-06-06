#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat jc(50, "Jean-Claude");
	std::cout << jc;
	jc++;
	std::cout << jc;
	jc--;
	std::cout << jc;
	Bureaucrat high(1550, "Jean-Claude");
	Bureaucrat low(-50, "Jean-Claude");
	return (0);
}