#include "Cat.hpp"

Cat::Cat()
{
	cout << "Default Cat Constructor called" << endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	cout << "Cat Destructor called" << endl;
}

Cat::Cat(const Cat &old_obj)
{
	cout << "Cat Copy constructor called" << endl;
	*this = old_obj;
}

void Cat::makeSound() const
{
	cout << "Nyaaaaaaaaaaaaan~~" << endl;
}

Cat &Cat::operator=(const Cat &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	return (*this);
}

Brain *Cat::getBrain(void)
{
	return (this->_brain);
}
