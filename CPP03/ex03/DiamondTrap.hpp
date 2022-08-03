#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		DiamondTrap();
		std::string	_name;
	public:
		DiamondTrap(string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &old_obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI(void) const;
};

#endif