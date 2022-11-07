#include "Animal.hpp"

Animal::Animal()
{
	cout << "Default Animal Constructor called" << endl;
	this->_type = "Animal";
}

Animal::~Animal()
{
	cout << "Animal Destructor called" << endl;
}

Animal::Animal(const Animal &old_obj)
{
	cout << "Animal copy constructor called" << endl;
	*this = old_obj;
}

void Animal::makeSound() const
{
	cout << "*Insert Animal Noises*" << endl;	;
}

const string	&Animal::getType( void ) const
{
	return(this->_type);	
}

Animal &Animal::operator=(const Animal &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	return (*this);
}