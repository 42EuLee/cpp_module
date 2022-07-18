#include "Dog.hpp"

Dog::Dog()
{
	cout << "Default Dog Constructor called" << endl;
}

Dog::~Dog()
{
	cout << "Dog Destructor called" << endl;
}

void Dog::makeSound() const
{
	cout << "*Autistic Teck Yuan noises*" << endl;
}