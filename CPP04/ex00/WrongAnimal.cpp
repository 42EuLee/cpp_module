#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	cout << "Default WrongAnimal Constructor called" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal Destructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old_obj)
{
	cout << "WrongAnimal copy constructor called" << endl;
	*this = old_obj;
}

void WrongAnimal::makeSound() const
{
	cout << "*Insert WrongAnimal Noises*" << endl;	;
}

const string	&WrongAnimal::getType( void ) const
{
	return(this->_type);	
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	return (*this);
}