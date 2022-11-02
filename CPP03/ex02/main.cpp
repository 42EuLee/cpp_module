#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "styling.h"

int	main(void)
{
	{
		cout << TEL << "--------Test 1---------" << RESET << endl;
		cout << IDG << "<Test shows that all the member function works>" << RESET << endl;
	
		FragTrap a1("Joel");
		string yz = "Yun Zhe";
	
		cout << endl << YLW << "<ClapTrap status at start>" << RESET;
		cout << endl << a1 << endl << endl;

		a1.attack(yz);
		yz = "Bruised YZ";
		a1.attack(yz);
		yz = "Dead YZ";
		a1.attack(yz);
		a1.takeDamage(2);
		a1.beRepaired(1);
		a1.highFivesGuys();

		cout << endl << YLW << "<ClapTrap status at end>" << RESET;
		cout << endl << a1 << endl << endl;
	}
	{
		cout << TEL << "--------Test 2---------" << RESET << endl;
		cout << IDG << "<Test shows beRepaired() and attack() cannot be done with 0 energy>" << RESET << endl;

		FragTrap a1("Joel");
		string yz = "Yun Zhe";
	
		cout << endl << YLW << "<ClapTrap status at start>" << RESET;
		cout << endl << a1 << endl << endl;

		a1.beRepaired(101);
		a1.attack(yz);
		a1.beRepaired(99);
		a1.beRepaired(1);
		a1.attack(yz);
	
		cout << endl << YLW << "<ClapTrap status at end>" << RESET;
		cout << endl << a1 << endl << endl;
	}
	{
		cout << TEL << "--------Test 3---------" << RESET << endl;
		cout << IDG << "<Test shows that ClapTrap can't do anything if it's dead>" << RESET << endl;

		FragTrap a1("Joel");
		string yz = "Yun Zhe";
	
		cout << endl << YLW << "<ClapTrap status at start>" << RESET;
		cout << endl << a1 << endl << endl;

		a1.takeDamage(100);
		a1.takeDamage(1);
		a1.attack(yz);
		a1.beRepaired(1);
		a1.highFivesGuys();

		cout << endl << YLW << "<ClapTrap status at end>" << RESET;
		cout << endl << a1 << endl << endl;
	}
	{
		cout << TEL << "--------Test 4---------" << RESET << endl;
		cout << IDG << "<Test shows copy constructor work>" << RESET << endl;

		FragTrap a1("Joel");
		FragTrap a2("Nazrin");
		string yz = "Yun Zhe";
	
		cout << endl << YLW << "<ClapTrap status at start>" << RESET;
		cout << endl << a1 << endl << endl;

		a1.attack(yz);
		a1 = a2;


		cout << endl << YLW << "<ClapTrap status at end>" << RESET;
		cout << endl << a1 << endl << endl;
	}
}