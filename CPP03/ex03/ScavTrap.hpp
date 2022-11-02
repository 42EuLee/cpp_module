#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		// ScavTrap();
		int	_attack_damage;
		int	_energy_points;
		int _hit_points;
	public:
		ScavTrap(string name);
		~ScavTrap();
		ScavTrap (const ScavTrap &old_obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void guardGate();
		ScavTrap 	&operator=(const ScavTrap &ref);

		int		getHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;

};
std::ostream &operator<<(std::ostream &out, ScavTrap const &ref);

#endif