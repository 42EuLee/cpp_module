#include "ClapTrap.hpp"

// ClapTrap::ClapTrap()
// {
// 	cout << "ClapTrap Default Constructor called" << endl;
// }

ClapTrap::ClapTrap(string name)
{
	cout << "ClapTrap Default Constructor called" << endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap (const ClapTrap &ref)
{
	cout << "Copy constructor called" << endl;
	*this = ref;
}

ClapTrap::~ClapTrap ()
{
	cout << "ClapTrap Destructor called" << endl;
}

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	this->_attack_damage = ref.getAttackDamage();
	this->_energy_points = ref.getEnergyPoints();
	this->_hit_points = ref.getHitPoints();
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
    out << "ClapTrap Name: "  << ORG << ref.getName() << endl 
	<< RESET << "Attack Damage: " << RED << ref.getAttackDamage() << endl 
	<< RESET << "Energy Points: " << TEL << ref.getEnergyPoints() << endl
	<< RESET << "Hit Points: " << GRN << ref.getHitPoints() << RESET << endl;
    return (out);
}
