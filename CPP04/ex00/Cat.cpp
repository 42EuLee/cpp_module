#include "Cat.hpp"

Cat::Cat()
{
	cout << "Default Cat Constructor called" << endl;
}

Cat::~Cat()
{
	cout << "Cat Destructor called" << endl;
}

void Cat::makeSound() const
{
	cout << "Nyaaaaaaaaaaaaan~~" << endl;
}