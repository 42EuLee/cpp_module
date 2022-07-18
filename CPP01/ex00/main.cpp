#include "Zombie.hpp"

int	main()
{
	Zombie *z;
	randomChump("random_chump");
	z = newZombie("new_zombie");

	delete z;
}
