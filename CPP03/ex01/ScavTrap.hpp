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
		void guardGate();
		ScavTrap 	&operator=(const ScavTrap &ref);

};
std::ostream &operator<<(std::ostream &out, ScavTrap const &ref);

#endif