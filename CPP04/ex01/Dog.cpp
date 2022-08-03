#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	cout << "Default Dog Constructor called" << endl;
}

Dog::~Dog()
{
	delete this->brain;
	cout << "Dog Destructor called" << endl;
}

Dog::Dog(const Dog &old_obj)
{
	cout << "Dog copy constructor called" << endl;
	*this = old_obj;
}

void Dog::makeSound() const
{
	cout << "*Autistic Teck Yuan noises*" << endl;
}

Brain	*Dog::get_Brain(void)
{
	return (this->brain);
}