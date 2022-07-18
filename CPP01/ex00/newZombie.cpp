#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *z1 = new Zombie();
	z1->setName("new_zombie");
	z1->announce();
	return (z1);
}