#include "Dog.hpp"

Dog::Dog()
{
	cout << GRN << "Default Dog Constructor called" << RESET << endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	cout << ORG << "Dog Destructor called" << RESET << endl;
}

Dog::Dog(const Dog &old_obj)
{
	cout << VLT << "Dog Copy constructor called" << RESET << endl;
	this->_type = old_obj.getType();
	this->_brain = new Brain(*old_obj.getBrain());
	return ;
}

void Dog::makeSound() const
{
	cout << "Teck Yuan : Bark bark" << endl;
}

Dog &Dog::operator=(const Dog &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	this->_brain = new Brain(*ref.getBrain());
	return (*this);
}

Brain *Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::setType(string change)
{
	this->_type = change;
}
