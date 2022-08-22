#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"


using std::string;
using std::cout;
using std::endl;

class HumanB
{
	private:
		string _name;
		Weapon *_weapon;
	public:
		HumanB();
		HumanB(string name);
		~HumanB(void);

		void attack();
		void setWeapon(Weapon &weapon);
};

#endif