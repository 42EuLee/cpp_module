#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

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
		virtual void makeSound() const;
		const string	&getType( void ) const ;
};

#endif