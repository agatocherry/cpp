#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	Harl harl;

	int expression = 0;
	std::string	expressionName[5] = {(char *)"DEBUG", (char *)"INFO", (char *)"WARNING", (char *)"ERROR"};
	while (expression < 4)
	{
		if (expressionName[expression] == (std::string)level)
			break ;
		expression++;
	}
	switch(expression){
	case 0:
		std::cout << "[DEBUG]" << std::endl;
		harl.debug();
		std::cout << std::endl;
	case 1:
		std::cout << "[INFO]" << std::endl;
		harl.info();
		std::cout << std::endl;
	case 2:
		std::cout << "[WARNING]" << std::endl;
		harl.warning();
		std::cout << std::endl;
	case 3:
		std::cout << "[ERROR]" << std::endl;
		harl.error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::debug( void )
{
	std::cout
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl;
}

void Harl::info( void )
{
	std::cout
	<< "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void Harl::warning( void )
{
	std::cout
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void Harl::error( void )
{
	std::cout
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}