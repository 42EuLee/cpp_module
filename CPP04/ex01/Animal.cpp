#include "Animal.hpp"

Animal::Animal()
{
	cout << "Default Animal Constructor called" << endl;
}

Animal::~Animal()
{
	cout << "Dog Destructor called" << endl;
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
	return(this->type);	
}