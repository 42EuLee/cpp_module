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
	cout << "HURR DURR, I AM A WRONG CAT NAMED TECK YUAN, I IS DUMB AS HECK uhuHUHuhuhUHuuuhh" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	return (*this);
}