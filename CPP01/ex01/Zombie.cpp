#include "Zombie.hpp"

void Zombie::announce()
{
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << this->_name << ": gets shot in the head" << endl;
}

string	Zombie::getName(void)
{
	return(this->_name);
}

void	Zombie::setName(string name)
{
	this->_name = name;
}
