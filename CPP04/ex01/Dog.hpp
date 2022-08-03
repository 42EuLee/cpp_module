#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Dog : public Animal
{
	private:
		Brain 	*brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &old_obj);
		void makeSound() const;
		Brain 	*get_Brain(void);
	
};

#endif