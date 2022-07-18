#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap a1("[Naz]");
	ScavTrap a2("[Ding]");
	FragTrap a3("[Edison]");
	DiamondTrap a4("[Nakama power NazDinSon]");

	cout << "--------------------------------------------------" << endl;
	a1.attack("[Gay executive Yun Zhe]");
	a1.takeDamage(2);
	a1.beRepaired(1);
	a1.beRepaired(1);
	a1.beRepaired(2);
	cout << endl;

	cout << "--------------------------------------------------" << endl;
	a2.attack("[Gay Club Founder Jason]");
	a2.takeDamage(2);
	a2.beRepaired(1);
	a2.beRepaired(1);
	a2.beRepaired(2);
	a2.guardGate();
	cout << endl;

	cout << "--------------------------------------------------" << endl;
	a3.attack("[Gay couples, Jason and Yun Zhe]");
	a3.takeDamage(2);
	a3.beRepaired(1);
	a3.beRepaired(1);
	a3.beRepaired(2);
	a3.highFivesGuys();
	cout << endl;

	cout << "--------------------------------------------------" << endl;
	a4.attack("[Gay Trio, Jason, Yun Zhe and Gaylord fofo Teck Yuan]");
	a4.takeDamage(2);
	a4.beRepaired(1);
	a4.beRepaired(1);
	a4.beRepaired(2);
	a4.guardGate();
	a4.highFivesGuys();
	a4.whoAmI();
	cout << endl;
	cout << "--------------------------------------------------" << endl;

}