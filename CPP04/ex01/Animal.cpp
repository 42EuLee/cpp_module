#include "Animal.hpp"

Animal::Animal()
{
	cout << BLU << "Default Animal Constructor called" << RESET << endl;
	this->_type = "Animal";
}

Animal::~Animal()
{
	cout << YLW << "Animal Destructor called" << RESET << endl;
}

Animal::Animal(const Animal &old_obj)
{
	cout << VLT <<"Animal copy constructor called" << RESET << endl;
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