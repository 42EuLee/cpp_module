#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

using std::cout;
using std::endl;
using std::string;

class Dog : public Animal
{
	protected:
		string type;
	public:
		Dog();
		~Dog();
		void makeSound() const;
};

#endif