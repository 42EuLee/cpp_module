#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		// FragTrap();
		int	_attack_damage;
		int	_energy_points;
		int _hit_points;
	public:
		FragTrap(string name);
		~FragTrap();
		FragTrap (const FragTrap &old_obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int	getHitPoints(void) const;
		int	getEnergyPoints(void) const;
		int	getAttackDamage(void) const;
		void highFivesGuys(void);
		FragTrap 	&operator=(const FragTrap &ref);

};

std::ostream &operator<<(std::ostream &out, FragTrap const &ref);


#endif