#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "styling.h"

int	main(void)
{
	ClapTrap a1("Naz");
	ScavTrap a2("Ding");
	FragTrap a3("Joel");
	string TY = "Teck Yuan";
	cout << a1 << endl;
	a1.attack(TY);
	a1.takeDamage(2);
	a1.beRepaired(1);
	a1.beRepaired(1);
	a1.beRepaired(2);
	cout << endl;

	cout << a2 << endl;
	a2.beRepaired(1);
	a2.attack(TY);
	a2.takeDamage(10);
	a2.guardGate();
	cout << endl;

	cout << a3 << endl;
	a3.beRepaired(1);
	a3.attack(TY);
	a3.takeDamage(10);
	a3.highFivesGuys();
	cout << endl;
}