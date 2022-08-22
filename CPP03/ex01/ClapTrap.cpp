#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name)
{
	// cout << "ClapTrap Constructor called" << endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap (const ClapTrap &ref)
{
	// cout << "Copy constructor called" << endl;
	*this = ref;
}

ClapTrap::~ClapTrap ()
{
	// cout << "ClapTrap Destructor called" << endl;
}

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

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	this->_attack_damage = ref.getAttackDamage();
	this->_energy_points = ref.getEnergyPoints();
	this->_attack_damage = ref.getAttackDamage();
	this->_name	= ref.getName();
	return (*this);
}

int	ClapTrap::getHitPoints(void) const
{
	return(this->_hit_points);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return(this->_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return(this->_attack_damage);
}

string ClapTrap::getName(void) const
{
	return(this->_name);
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &ref)
{
    out << "ClapTrap Name: "  << ref.getName() << endl 
	<< "Attack Damage: " << ref.getAttackDamage() << endl 
	<< "Energy Points: " << ref.getEnergyPoints() << endl
	<< "Hit Points: " << ref.getHitPoints() << endl;
    return (out);
}
