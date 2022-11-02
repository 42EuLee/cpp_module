#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	cout << "Default WrongCat Constructor called" << endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat Destructor called" << endl;
}

WrongCat::WrongCat(const WrongCat &old_obj)
{
	cout << "WrongCat copy constructor called" << endl;
	*this = old_obj;
}

void WrongCat::makeSound() const
{
	cout << "HURR DURR, I AM A WRONG CAT NAMED TECK YUAN, I SUCK COCKS uhuHUHuhuhUHuuuhh" << endl;
}