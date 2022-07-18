#include "Weapon.hpp"

using std::string;

Weapon::Weapon(string type)
{
	cout << "Weapon constructor called" << endl;
	this->_type = type;
}

Weapon::~Weapon()
{
	cout << "Weapon destructor called" << endl;
}

const string& Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(string const &type)
{
	this->_type = type;
}