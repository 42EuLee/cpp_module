#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	cout << "DiamondTrap Default Constructor called" << endl;
	// cout << "Together, with the power of nakama, I spawn!! -DiamondTrap" << endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap Destructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &old_obj) : ClapTrap(old_obj.getName()), FragTrap(old_obj.getName()), ScavTrap(old_obj.getName())
{
	cout << "DiamondTrap copy constructor called" << endl;
	*this = old_obj;
}

void		DiamondTrap::whoAmI( void ) const
{
	std::cout << "I am " << ORG << this->_name << RESET << " , the mighty. my ClapTrap name is "
		<< ORG << ClapTrap::_name << RESET << "." << endl;
}

void DiamondTrap::attack(const std::string& target)
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

void DiamondTrap::takeDamage(unsigned int amount)
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

void DiamondTrap::beRepaired(unsigned int amount)
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

int	DiamondTrap::getHitPoints(void) const
{
	return(this->_hit_points);
}

int	DiamondTrap::getEnergyPoints(void) const
{
	return(this->_energy_points);
}

int	DiamondTrap::getAttackDamage(void) const
{
	return(this->_attack_damage);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref)
{
	this->_attack_damage = ref.getAttackDamage();
	this->_energy_points = ref.getEnergyPoints();
	this->_hit_points = ref.getHitPoints();
	this->_name	= ref.getName();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &ref)
{
    out << "DiamondTrap Name: "  << ORG << ref.getName() << endl 
	<< RESET << "Attack Damage: " << RED << ref.getAttackDamage() << endl 
	<< RESET << "Energy Points: " << TEL << ref.getEnergyPoints() << endl
	<< RESET << "Hit Points: " << GRN << ref.getHitPoints() << RESET << endl;
    return (out);
}