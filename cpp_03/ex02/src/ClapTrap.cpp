#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Noname"), _health(100), _energy(50), _attack_damage(20) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _health(100), _energy(50), _attack_damage(20) {
	std::cout << "ClapTrap paramaterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
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