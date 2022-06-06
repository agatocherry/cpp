#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap anna("Anna");
	ClapTrap elsa("Elsa");

	anna.attack(elsa.getName());
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(5);
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(10);
	return (0);
}