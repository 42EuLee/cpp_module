#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Cat : public Animal
{
	private:
		// string	_type;
		Brain 	*_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &old_obj);
		void makeSound() const;
		Cat &operator=(const Cat &ref);
		Brain *getBrain(void);
};

#endif