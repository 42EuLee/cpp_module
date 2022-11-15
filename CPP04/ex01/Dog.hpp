#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"
# include "styling.h"

using std::cout;
using std::endl;
using std::string;

class Dog : public Animal
{
	private:
		// string	_type;
		Brain 	*_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &old_obj);
		void makeSound() const;
		Dog &operator=(const Dog &ref);
		Brain *getBrain(void) const;
		void	setType(string change);
};

#endif
