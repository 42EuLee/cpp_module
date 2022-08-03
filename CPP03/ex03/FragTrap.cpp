#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	cout << "FragTrap default Constructor called" << endl;
}

FragTrap::FragTrap(string name)
{
	cout << "FragTrap name Constructor called" << endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap Destructor called" << endl;
}

FragTrap::FragTrap(const FragTrap &old_obj)
{
	cout << "FragTrap copy constructor called" << endl;
	*this = old_obj;
}

void FragTrap::attack(const std::string& target)
{
	this->_energy_points--;
	cout << "FragTrap " << _name;
	cout << " does damage to teh " << target;
	cout << " which does a whopping " << _attack_damage;
	cout << " amount of damage. WOWZERS. Notice me senpai, notice meeeeee" << endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	cout << "FragTrap " << _name;
	cout << "  ouch " << amount;
	cout << " damage HURRRRRTS " << _hit_points;
	cout << " hp left on this retard." << endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		cout << "FragTrap " << _name;
		cout << " STAPH, YOU CAN'T HEAL. ";
		cout << " The FragTrap has " << _energy_points;
		cout << " Rip." << endl;
	}
	else
	{
		this->_energy_points -= amount;
		this->_hit_points += amount;
		cout << "FragTrap " << _name;
		cout << " assembles itself for " << amount;
		cout << " amount its dumb hp reached " << _hit_points;
		cout << " . IDGAF." << endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	cout << "WE DID IT!! HIGH FIVE GUYS!!...... NO? OKAY ;(" << endl;
}