#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		// DiamondTrap();
		std::string	_name;
		using ScavTrap::_energy_points;
		using FragTrap::_hit_points;
		using FragTrap::_attack_damage;

	public:
		DiamondTrap(string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &old_obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int		getHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;
		void whoAmI(void) const;
		DiamondTrap &operator=(const DiamondTrap &ref);
};
std::ostream &operator<<(std::ostream &out, DiamondTrap const &ref);

#endif