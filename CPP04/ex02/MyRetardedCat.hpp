#ifndef MYRETARDEDCAT_HPP
# define MYRETARDEDCAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"


using std::cout;
using std::endl;
using std::string;

class MyRetardedCat : public AAnimal
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