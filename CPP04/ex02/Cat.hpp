#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Cat : public AAnimal
{
	private:
		// string	_type;
		Brain 	*_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &old_obj);
		Cat &operator=(const Cat &ref);
		void makeSound() const;
		Brain *getBrain(void);
};

#endif