#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;

	int expression = 0;
	std::string	expressionName[5] = {(char *)"DEBUG", (char *)"INFO", (char *)"WARNING", (char *)"ERROR"};
	while (expression < 4)
	{
		if (expressionName[expression] == (std::string)argv[1])
			break ;
		expression++;
	}
	switch(expression){
	case 0:
		std::cout << "[DEBUG]" << std::endl;
		karen.complain("DEBUG");
		std::cout << std::endl;
	case 1:
		std::cout << "[INFO]" << std::endl;
		karen.complain("INFO");
		std::cout << std::endl;
	case 2:
		std::cout << "[WARNING]" << std::endl;
		karen.complain("WARNING");
		std::cout << std::endl;
	case 3:
		std::cout << "[ERROR]" << std::endl;
		karen.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}