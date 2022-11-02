#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	// cout << "ScavTrap Constructor called" << endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	// cout << "ScavTrap Destructor called" << endl;
}

ScavTrap::ScavTrap (const ScavTrap &old_obj) : ClapTrap(old_obj.getName())
{
	// cout << "ScavTrap copy constructor called" << endl;
	*this = old_obj;
}

void ScavTrap::guardGate()
{
	if (this->_hit_points < 1)
	{
		cout << "*Cricket Noises*" << endl;
	}
	else
		cout << "ScavTrap is now in Gatekeeper mode. It does nothing, great." << endl;
}

ScavTrap 	&ScavTrap::operator=(const ScavTrap &ref)
{
	this->_attack_damage = ref.getAttackDamage();
	this->_energy_points = ref.getEnergyPoints();
	this->_hit_points = ref.getHitPoints();
	this->_name	= ref.getName();
	return (*this);
}


std::ostream &operator<<(std::ostream &out, ScavTrap const &ref)
{
    out << "ScavTrap Name: "  << ORG << ref.getName() << endl 
	<< RESET << "Attack Damage: " << RED << ref.getAttackDamage() << endl 
	<< RESET << "Energy Points: " << TEL << ref.getEnergyPoints() << endl
	<< RESET << "Hit Points: " << GRN << ref.getHitPoints() << RESET << endl;
    return (out);
}
