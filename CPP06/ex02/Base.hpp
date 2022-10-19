#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

using std::cout;
using std::endl;

class Base
{
	private:

	public:
		Base();
		virtual ~Base();

};

Base *generate(void);
void identify_ptr(Base* p);
void identify_ref(Base& p);

#endif