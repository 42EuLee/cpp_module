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
		Dog(const Dog &old_obj);
		void makeSound() const;
		Dog &operator=(const Dog &ref);

};

#endif