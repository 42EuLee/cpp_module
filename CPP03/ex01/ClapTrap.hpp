#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

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
		ClapTrap(void);
		ClapTrap(string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &old_obj);
		virtual void attack(const std::string& target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
};

#endif