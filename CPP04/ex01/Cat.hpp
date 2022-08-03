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
		Brain 	*brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &old_obj);
		void makeSound() const;
		Brain 	*get_Brain(void);

};

#endif