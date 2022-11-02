#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "styling.h"

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
	protected:
		string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;
	public:
		ClapTrap(string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &old_obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap 	&operator=(const ClapTrap &ref);

		int		getHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;
		string	getName(void) const;

};

std::ostream &operator<<(std::ostream &out, ClapTrap const &ref);

#endif