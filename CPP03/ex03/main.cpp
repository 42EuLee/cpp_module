#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	cout << TEL << "\n--------------------TEST 1-------------------------\n" << RESET << endl;
	{
		ClapTrap a1("Joel");
		cout << endl << a1 << endl;
		a1.attack("Yun zhe");
		a1.takeDamage(2);
		a1.beRepaired(1);
		a1.beRepaired(1);
		a1.beRepaired(2);
		cout << endl;
	}
	cout << TEL << "\n--------------------TEST 2-------------------------\n" << RESET << endl;
	{

		ScavTrap a2("Nazrin");
		cout << endl << a2 << endl;
		a2.attack("his meat");
		a2.takeDamage(2);
		a2.beRepaired(1);
		a2.beRepaired(1);
		a2.beRepaired(2);
		a2.beRepaired(50);
		a2.guardGate();
		cout << endl;
	}
	cout << TEL << "\n--------------------TEST 3-------------------------\n" << RESET << endl;
	{
		FragTrap a3("FragTrap");
		cout << endl << a3 << endl;
		a3.attack("Bruiser");
		a3.takeDamage(2);
		a3.beRepaired(1);
		a3.beRepaired(1);
		a3.beRepaired(2);
		a3.highFivesGuys();
		a3.beRepaired(50);
		cout << endl;
	}
	cout << TEL << "\n--------------------TEST 4-------------------------\n" << RESET << endl;
	{
		DiamondTrap a4("DiamondTrap");
		cout << endl << a4 << endl;
		a4.attack("Marauder");
		a4.takeDamage(2);
		a4.beRepaired(1);
		a4.beRepaired(1);
		a4.beRepaired(2);
		a4.beRepaired(50);
		a4.guardGate();
		a4.highFivesGuys();
		a4.whoAmI();
		cout << endl;
	}
	cout << TEL <<"\n-----------------------END------------------------\n" << RESET << endl;

	return (0);
}