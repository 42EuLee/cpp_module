#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Weapon
{
	private:
		string _type;
	public:
		Weapon(string name);
		~Weapon(void);
		const string	&getType(void) const;
		void			setType(string const &name);
};

#endif