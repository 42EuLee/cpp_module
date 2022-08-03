#include "Dog.hpp"

Dog::Dog()
{
	cout << "Default Dog Constructor called" << endl;
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
	cout << "*Autistic Teck Yuan noises*" << endl;
}