#include "Karen.hpp"

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

void Karen::complain( std::string level )
{
	void ( Karen::*f[5] )( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
		0
	};
	char *names[5] = {(char *)"DEBUG", (char *)"INFO", (char *)"WARNING", (char *)"ERROR"};
	int	i = 0;

	while (i < 4)
	{
		if (names[i] == level)
			(this->*f[i])();
		i++;
	}
}

void Karen::debug( void )
{
	std::cout
	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
	<< std::endl;
}

void Karen::info( void )
{
	std::cout
	<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void Karen::warning( void )
{
	std::cout
	<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
	<< std::endl;
}

void Karen::error( void )
{
	std::cout
	<< "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}