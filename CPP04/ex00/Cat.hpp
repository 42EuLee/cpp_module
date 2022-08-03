#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"


using std::cout;
using std::endl;
using std::string;

class Cat : public Animal
{
	protected:
		string type;
	public:
		Cat();
		~Cat();
		Cat(const Cat &old_obj);
		void makeSound() const;
};

#endif