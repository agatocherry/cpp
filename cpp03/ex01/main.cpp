#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap anna("Anna");
	ScavTrap elsa("Elsa");

	anna.attack(elsa.getName());
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(20);
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(100);
	anna.guardGate();
	return (0);
}