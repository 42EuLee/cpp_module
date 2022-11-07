#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::string;
using std::cout;
using std::endl;

class Character : public ICharacter
{
	private:
		AMateria			*_inventory[4];
		string				_name;
		int					_count;
	public:
        Character(string &name);
		virtual ~Character() {}
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);


		Character &operator=(const Character &ref);

};

#endif