#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Hello");

	a.attack("Joao");
	a.beRepaired(1);
	a.takeDamage(9);
    return 0;
}
