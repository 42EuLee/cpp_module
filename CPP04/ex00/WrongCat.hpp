#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"


using std::cout;
using std::endl;
using std::string;

class WrongCat : public WrongAnimal
{
	protected:
		string type;
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &old_obj);
		void makeSound() const;
};

#endif