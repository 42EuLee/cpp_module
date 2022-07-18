#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(string name)
{
	cout << "Claptrap constructor called" << endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap (const ClapTrap &old_obj)
{
	cout << "Copy constructor called" << endl;
	*this = old_obj;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap Destructor called" << endl;
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!

void ClapTrap::attack(const std::string& target)
{
	this->_energy_points--;
	cout << "Claptrap " << _name;
	cout << " attacks " << target;
	cout << " causing " << _attack_damage;
	cout << " points of attack damage." << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	cout << "Claptrap " << _name;
	cout << " took " << amount;
	cout << " damage. There is " << _hit_points;
	cout << " hit points left of the poor ClapTrap." << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		cout << "Claptrap " << _name;
		cout << " can't repair no more. ";
		cout << " The Claptrap has " << _energy_points;
		cout << " Rip." << endl;
	}
	else
	{
		this->_energy_points -= amount;
		this->_hit_points += amount;
		cout << "Claptrap " << _name;
		cout << " repairs itself for " << amount;
		cout << " amount and its hits points is " << _hit_points;
		cout << " . What a chad." << endl;
	}
}
