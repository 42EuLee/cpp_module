#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap a1("Naz");
	ScavTrap b1("Ding");

	a1.attack("Yun Zhe");
	a1.takeDamage(2);
	a1.beRepaired(1);
	a1.beRepaired(1);
	a1.beRepaired(2);

	b1.beRepaired(1);
	b1.attack("Jeff");
	b1.takeDamage(10);
	b1.guardGate();
}