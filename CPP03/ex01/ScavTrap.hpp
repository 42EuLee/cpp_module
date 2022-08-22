#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();
	public:
		ScavTrap(string name);
		~ScavTrap();
		ScavTrap (const ScavTrap &old_obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();

		ClapTrap 	&operator=(const ClapTrap &ref)

};

std::ostream &operator<<(std::ostream &out, ScavTrap const &ref);

#endif