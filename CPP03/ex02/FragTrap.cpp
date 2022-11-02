#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	cout << "FragTrap Constructor called" << endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap Destructor called" << endl;
}

FragTrap::FragTrap(const FragTrap &old_obj) : ClapTrap(old_obj.getName())
{
	cout << "FragTrap copy constructor called" << endl;
	*this = old_obj;
}

// void FragTrap::attack(const std::string& target)
// {
// 	this->_energy_points--;
// 	cout << "FragTrap " << _name;
// 	cout << " dOeS DAmAgeeeee to tEH " << target;
// 	cout << " WHICH DOES WOW, LOOK AT THAT! " << _attack_damage;
// 	cout << "amoUnt of Damage. WOWZERS." << endl;
// }

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	this->_hit_points -= amount;
// 	cout << "FragTrap " << _name;
// 	cout << "  OUCH OUCH OUCH " << amount;
// 	cout << " OF damage HURRRRRTS " << _hit_points;
// 	cout << " hp left on this retard." << endl;
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	if (this->_energy_points == 0)
// 	{
// 		cout << "FragTrap " << _name;
// 		cout << " STAPH, YOU CAN'T HEAL. ";
// 		cout << " The FragTrap has " << _energy_points;
// 		cout << " Rip." << endl;
// 	}
// 	else
// 	{
// 		this->_energy_points -= amount;
// 		this->_hit_points += amount;
// 		cout << "FragTrap " << _name;
// 		cout << " assembles itself for " << amount;
// 		cout << " amount its dumb hp reached " << _hit_points;
// 		cout << " . IDGAF" << endl;
// 	}
// }

void FragTrap::highFivesGuys(void)
{
	cout << "WE DID IT!! HIGH FIVE GUYS!!...... NO? OKAY ;(" << endl;
}

FragTrap 	&FragTrap::operator=(const FragTrap &ref)
{
	this->_attack_damage = ref.getAttackDamage();
	this->_energy_points = ref.getEnergyPoints();
	this->_hit_points = ref.getHitPoints();
	this->_name	= ref.getName();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, FragTrap const &ref)
{
    out << "FragTrap Name: "  << ORG << ref.getName() << endl 
	<< RESET << "Attack Damage: " << RED << ref.getAttackDamage() << endl 
	<< RESET << "Energy Points: " << TEL << ref.getEnergyPoints() << endl
	<< RESET << "Hit Points: " << GRN << ref.getHitPoints() << RESET << endl;
    return (out);
}