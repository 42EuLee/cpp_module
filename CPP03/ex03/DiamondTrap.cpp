#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	cout << "DiamondTrap default Constructor called" << endl;
}

DiamondTrap::DiamondTrap(string name)
{
	cout << "DiamondTrap Constructor called" << endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap Destructor called" << endl;
}

void DiamondTrap::attack(const std::string& target)
{
	this->_energy_points--;
	cout << "DiamondTrap " << _name;
	cout << " attacks " << target;
	cout << " causing " << _attack_damage;
	cout << " points of attack damage." << endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	cout << "DiamondTrap " << _name;
	cout << " took " << amount;
	cout << " damage. There is " << _hit_points;
	cout << " hit points left of the poor DiamondTrap." << endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		cout << "DiamondTrap " << _name;
		cout << " can't repair no more. ";
		cout << " The DiamondTrap has " << _energy_points;
		cout << " Rip." << endl;
	}
	else
	{
		this->_energy_points -= amount;
		this->_hit_points += amount;
		cout << "DiamondTrap " << _name;
		cout << " repairs itself for " << amount;
		cout << " amount and its hits points is " << _hit_points;
		cout << " . What a chad." << endl;
	}
}

void		DiamondTrap::whoAmI( void ) const
{
	std::cout << "Watashi wa " << this->_name << " desu. Soshite, watashi no ClapTrap no namae wa "
		<< ClapTrap::_name << std::endl;
}