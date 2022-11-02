#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap a1("Naz");
	ScavTrap b1("Ding");
	ScavTrap b2("Retard");
	string gay = "Yun Zhe";
	a1.attack(gay);
	a1.takeDamage(2);
	gay = "Jason";
	a1.attack(gay);
	a1.beRepaired(1);
	a1.beRepaired(1);
	a1.beRepaired(2);
	a1.beRepaired(5);
	a1.beRepaired(4);
	a1.beRepaired(1);
	a1.attack("Yun Zhe");
	a1.takeDamage(16);
	a1.attack("Yun Zhe");
	a1.beRepaired(1);
	a1.takeDamage(1);

	b1.attack("Yun Zhe");
	b1.takeDamage(2);
	b1.attack("Yun Zhe");
	b1.beRepaired(1);
	b1.beRepaired(1);
	b1.beRepaired(2);
	b1.beRepaired(5);
	b1.beRepaired(4);
	b1.beRepaired(1);
	b1.attack("Yun Zhe");
	b1.takeDamage(16);
	b1.attack("Yun Zhe");
	b1.beRepaired(1);
	b1.takeDamage(1);

	// cout << endl << a1 << endl; // &operator<<
	// a1 = b1; // &operator=
	cout << a1 << endl;
	cout << b1 << endl;
	b1 = b2;
	cout << b1 << endl;

	b1.beRepaired(1);
	b1.attack("Edison");
	b1.takeDamage(10);
	b1.guardGate();
}