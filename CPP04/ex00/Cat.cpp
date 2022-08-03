#include "Cat.hpp"

Cat::Cat()
{
	cout << "Default Cat Constructor called" << endl;
}

Cat::~Cat()
{
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