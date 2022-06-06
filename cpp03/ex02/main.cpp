#include "FragTrap.hpp"

int	main(void)
{
	FragTrap anna("Anna");
	FragTrap elsa("Elsa");

	anna.attack(elsa.getName());
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(20);
	elsa.takeDamage(anna.getHitPoints());
	elsa.beRepaired(100);
	anna.highFivesGuys();
	return (0);
}