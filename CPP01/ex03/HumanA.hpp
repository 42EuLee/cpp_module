#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanA
{
	private:
		string _name;
		Weapon &_weapon;
	public:
		HumanA(string name, Weapon &weapon);
		~HumanA(void);

		void attack();
		// void setWeapon(Weapon &weapon);

};

#endif
