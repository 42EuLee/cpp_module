#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Animal
{
	protected:
		string type;
	public:
		Animal();
		~Animal();
		Animal(const Animal &old_obj);
		virtual void makeSound() const;
		const string	&getType( void ) const ;
		Brain 	*get_Brain(void);
};

#endif