#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA()
{	
}

HumanA::~HumanA()
{
}

HumanA::HumanA(string name, Weapon &weapon) : _name(name) ,_weapon(weapon)
{
}


void HumanA::attack()
{
	cout << this->_name << " attacks with their " 
		<< this->_weapon.getType() << endl;
}
