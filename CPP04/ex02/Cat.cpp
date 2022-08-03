#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	cout << "Default Cat Constructor called" << endl;
}

Cat::~Cat()
{
	delete this->brain;
	cout << "Cat Destructor called" << endl;
}

Cat::Cat(const Cat &old_obj)
{
	cout << "Cat copy constructor called" << endl;
	*this = old_obj;
}

void Cat::makeSound() const
{
	cout << "Nyaaaaaaaaaaaaan~~" << endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}