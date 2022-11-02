#include "ScavTrap.hpp"

// ScavTrap::ScavTrap()
// {
// 	cout << "ScavTrap Default Constructor called" << endl;
// }

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	cout << "ScavTrap Default Constructor called" << endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap Destructor called" << endl;
}

ScavTrap::ScavTrap (const ScavTrap &old_obj) : ClapTrap(old_obj.getName())
{
	// cout << "ScavTrap copy constructor called" << endl;
	*this = old_obj;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points < 1)
	{
		cout << "Claptrap " << ORG << _name;
		cout << RESET << " is dead already you idiot. Hit what hit. ";
		cout << RESET << endl;
	}
	else if (this->_energy_points > 0)
	{
		this->_energy_points--;
		cout << "Claptrap " << ORG << _name;
		cout << RESET << " attacks " << PNK << target;
		cout << RESET << " causing " << RED << _attack_damage;
		cout << RESET << " points of attack damage." << endl;
	}
	else
	{
		cout << "Claptrap " << ORG << _name;
		cout << RESET << " is too tired of your shit as he have " << BLU << this->_energy_points;
		cout << RESET << " energy points." << endl;

	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
	{
		this->_hit_points -= amount;
		cout << "Claptrap " << ORG <<_name;
		cout << RESET << " IS ALREADY DEAD!! He took " << RED << amount;
		cout << RESET << " damage. There is " << GRN << _hit_points;
		cout << RESET << " hit points. You monster, get some help." << endl;
	}
	else
	{
		this->_hit_points -= amount;
		cout << "Claptrap " << ORG <<_name;
		cout << RESET << " took " << RED << amount;
		cout << RESET << " damage. There is " << GRN << _hit_points;
		if (this->_hit_points <= 0)
			cout << RESET << " no life anymore in this poor sad ClapTrap." << endl;
		else
			cout << RESET << " hit points left of the poor ClapTrap." << endl;

	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		cout << "Claptrap " << ORG <<_name;
		cout << RESET << " ain't doing shit no more. ";
		cout << RESET << "The Claptrap has " << GRN <<_hit_points;
		cout << RESET << " and that means its dead deado yo.";
		cout << RESET << " Rip in spaghetti never forgetti." << endl;
	}
	else if (this->_energy_points > 0)
	{
		if (this->_energy_points < (int)amount)
		{
			cout << "Claptrap " << ORG <<_name;
			cout << RESET " tries to repair itself for "<< TEL << amount;
			cout << RESET " but no bueno. The Claptrap has " << BLU;
			cout << this->_energy_points<< RESET << " energy left." << endl;
		}
		else
		{
			this->_energy_points -= amount;
			this->_hit_points += amount;
			cout << "Claptrap " << ORG <<_name;
			cout << RESET " repairs itself for "<< TEL << amount;
			cout << RESET " amount and its hits points is " << GRN <<_hit_points;
			cout << RESET ". The Claptrap has " << BLU << this->_energy_points;
			cout << RESET " left." << endl;
		}
	}
	else
	{
		cout << "Claptrap " << ORG <<_name;
		cout << RESET << " can't repair itself no more. ";
		cout << RESET << "The Claptrap has " << BLU <<_energy_points;
		cout << RESET << " left and is too much of a weaksauce to get its ass up.";
		cout << RESET << " Rip." << endl;
	}
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap is now in Gatekeeper mode. It does nothing, great." << endl;
}

int	ScavTrap::getHitPoints(void) const
{
	return(this->_hit_points);
}

int	ScavTrap::getEnergyPoints(void) const
{
	return(this->_energy_points);
}

int	ScavTrap::getAttackDamage(void) const
{
	return(this->_attack_damage);
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
