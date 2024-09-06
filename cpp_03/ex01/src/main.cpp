#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Hello");
	ScavTrap b("Chaleira");

	a.attack("Joao");
	a.beRepaired(1);
	a.takeDamage(9);
	b.guardGate();
	b.attack("Rubens");
	b.takeDamage(50);
    return (0);
}
