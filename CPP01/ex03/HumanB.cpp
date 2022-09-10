#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB()
{	
}


HumanB::HumanB(string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
		cout << this->_name  << " attacks with their bare fist "
			<< endl;
	else
		cout << this->_name << " attacks with their " 
			<< this->_weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
