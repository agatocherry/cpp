#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap anna("Anna");
	DiamondTrap elsa("Elsa");

	anna.attack(elsa.getName());
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(20);
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(100);
	anna.guardGate();
	anna.highFivesGuys();
	anna.whoAmI();
	return (0);
}