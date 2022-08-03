#ifndef MYRETARDEDCAT_HPP
# define MYRETARDEDCAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"


using std::cout;
using std::endl;
using std::string;

class MyRetardedCat : public Animal
{
	protected:
		string type;
	public:
		MyRetardedCat();
		~MyRetardedCat();
		MyRetardedCat(const MyRetardedCat &old_obj);
		void makeSound() const;
};

#endif