#include "Base.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::Base()
{
	cout << BLU << "Default constructor of Base called" << RESET << endl;
}

Base::~Base()
{
	cout << RED << "Destructor for Base called" << RESET << endl;
}

Base *generate(void)
{
	int random;
	srand(time(NULL));

	random = rand() % 3;

	if (random == 0)
	return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
	return (NULL);
}

void identify_ptr(Base *p)
{
    if (dynamic_cast<A*>(p) != nullptr) 
	{
    	cout << YLW << "A class" << RESET << endl;
    }
	else if (dynamic_cast<B*>(p) != nullptr) 
	{
    	cout << YLW << "B class" << RESET << endl;
    }
	else if (dynamic_cast<C*>(p) != nullptr)
	{
    	cout << YLW << "C class" << RESET << endl;
	}
	else
    	cout << RED << "Rip conversion" << RESET << endl;
}

void identify_ref(Base& p)
{
	try 
	{
		(void)dynamic_cast<A &>(p);
		// cout << "Conversion for A is okay" << endl;
    }
    catch (std::bad_cast &bc)
	{
	    // cout << "Conversion for A is NOT okay: " << bc.what() << endl;
    }
	try 
	{
		(void)dynamic_cast<B &>(p);
		// cout << "Conversion for B is okay" << endl;
    }
    catch (std::bad_cast &bc)
	{
	    // cout << "Conversion for B is NOT okay: " << bc.what() << endl;
    }
	try 
	{
		(void)dynamic_cast<C &>(p);
		// cout << "Conversion for C is okay" << endl;
    }
    catch (std::bad_cast &bc)
	{
	    // cout << "Conversion for C is NOT okay: " << bc.what() << endl;
    }
	return ;
}