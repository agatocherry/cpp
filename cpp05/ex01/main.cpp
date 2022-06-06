#include "Form.hpp"

int	main(void)
{
	Bureaucrat jc(49, "Jean-Claude");
	Form impot("Impot", 50, 50);
	std::cout << impot;
	jc.signForm(&impot);
	std::cout << impot;
	Form signedHigh("signedHigh", 156, 50);
	Form signedLow("signedLow", -10, 50);
	Form executeHigh("executeHigh", 50, 1450);
	Form executeLow("executeLow", 50, -50);
	return (0);
}