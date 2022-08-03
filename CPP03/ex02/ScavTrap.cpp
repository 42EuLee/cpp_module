#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name)
{
	cout << "ScavTrap Constructor called" << endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap Destructor called" << endl;
}

ScavTrap::ScavTrap (const ScavTrap &old_obj)
{
	cout << "ScavTrap copy constructor called" << endl;
	*this = old_obj;
}


void ScavTrap::guardGate()
{
	cout << "ScavTrap is now in Gatekeeper mode. It does nothing, great.	" << endl;
}

void ScavTrap::attack(const std::string& target)
{
	this->_energy_points--;
	cout << "ScavTrap " << _name;
	cout << " attacks " << target;
	cout << " causing " << _attack_damage;
	cout << " points of attack damage." << endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	cout << "ScavTrap " << _name;
	cout << " took " << amount;
	cout << " damage. There is " << _hit_points;
	cout << " hit points left of the poor ScavTrap." << endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		cout << "ScavTrap " << _name;
		cout << " can't repair no more. ";
		cout << " The ScavTrap has " << _energy_points;
		cout << " Rip." << endl;
	}
	else
	{
		this->_energy_points -= amount;
		this->_hit_points += amount;
		cout << "ScavTrap " << _name;
		cout << " repairs itself for " << amount;
		cout << " amount and its hits points is " << _hit_points;
		cout << " . What a chad." << endl;
	}
}