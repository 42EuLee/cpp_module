#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

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
		Character();
        Character(string const name);
		virtual ~Character();
		Character(const Character &old_obj);

		virtual std::string const &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	
		Character &operator=(const Character &ref);

};

#endif