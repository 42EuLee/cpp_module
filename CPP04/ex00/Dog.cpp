#include "Dog.hpp"

Dog::Dog()
{
	cout << "Default Dog Constructor called" << endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	cout << "Dog Destructor called" << endl;
}

Dog::Dog(const Dog &old_obj)
{
	cout << "Dog Copy constructor called" << endl;
	*this = old_obj;
}

void Dog::makeSound() const
{
	cout << "Teck Yuan : Bark bark" << endl;
}

Dog &Dog::operator=(const Dog &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	return (*this);
}