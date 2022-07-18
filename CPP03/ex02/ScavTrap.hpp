#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap( void );
	public:
		ScavTrap( const std::string name );
		~ScavTrap( void );
		void	beRepaired(unsigned int amount);
		void	attack( const std::string &target );
		void	takeDamage(unsigned int amount);
		void	guardGate( void );
	
};

#endif