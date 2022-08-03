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
		Brain 	*brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &old_obj);
		void makeSound() const;
		Brain 	*getBrain(void) const;

};

#endif