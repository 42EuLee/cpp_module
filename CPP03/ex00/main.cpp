#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a1("Bob");
	ClapTrap a2("Bobbie");

	
	a1.attack("Yun Zhe");
	a1.takeDamage(2);
	a1.beRepaired(1);
	a1.beRepaired(1);
	a1.beRepaired(2);
	cout << a1 << endl; // &operator<<
	a1 = a2; // &operator=
	cout << a1 << endl;

}