#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	FragTrap fragTrap;

	fragTrap.takeDamage(20);
	fragTrap.takeDamage(20);
	fragTrap.takeDamage(20);
	fragTrap.takeDamage(20);
	fragTrap.takeDamage(20);
	fragTrap.takeDamage(1);
	fragTrap.highFivesGuys();
	return (0);
}
