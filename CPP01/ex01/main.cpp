#include "Zombie.hpp"

int	main()
{
	Zombie *z;
	int num = 5;
	z = zombieHorde(num, "derp");
	delete [] z;
	system("leaks Zombie");
}