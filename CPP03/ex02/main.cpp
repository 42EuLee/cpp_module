#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap a1("Naz");
	ScavTrap a2("Ding");
	FragTrap a3("Edison");

	a1.attack("Yun Zhe");
	a1.takeDamage(2);
	a1.beRepaired(1);
	a1.beRepaired(1);
	a1.beRepaired(2);
	cout << endl;

	a2.beRepaired(1);
	a2.attack("Jason");
	a2.takeDamage(10);
	a2.guardGate();
	cout << endl;

	a3.beRepaired(1);
	a3.attack("Gay couples, Jason and Yun Zhe");
	a3.takeDamage(10);
	a3.highFivesGuys();
	cout << endl;
}