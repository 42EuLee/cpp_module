#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Dog : public AAnimal
{
	private:
		Brain 	*brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &old_obj);
		void makeSound() const;
		Brain 	*getBrain(void) const;
	
};

#endif