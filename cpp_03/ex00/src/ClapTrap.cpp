#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = "Noname";
	this->_energy = 10;
	this->_health = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(const std::string name) {
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_energy = 10;
	this->_health = 10;
	this->_attack_damage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	(void)copy;
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack_damage = copy._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_energy > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is to tired to do anything!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energy > 0) {
		std::cout << "ClapTrap " << this->_name << " got attacked viciously and lost " << amount << " health points!" << std::endl;
		this->_health -= amount;
		std::cout << "ClapTrap " << this->_name << " after being attacked has " << this->_health << " health points!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is to tired to do anything!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy > 0) {
		std::cout << "ClapTrap " << this->_name << " repaired itself " << amount << " health points!" << std::endl;
		this->_health += amount;
		std::cout << "ClapTrap " << this->_name << " after repair has " << this->_health << " health points!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is to tired to do anything!" << std::endl;
}
