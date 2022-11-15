#include "Cat.hpp"

Cat::Cat()
{
	cout << GRN << "Default Cat Constructor called" << RESET << endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	cout << ORG << "Cat Destructor called" << RESET << endl;
}

Cat::Cat(const Cat &old_obj)
{
	cout << VLT << "Cat copy constructor called" << RESET <<endl;
	this->_type = old_obj.getType();
	this->_brain = new Brain(*old_obj.getBrain());
	return ;
}

void Cat::makeSound() const
{
	cout << "Nyaaaaaaaaaaaaan~~" << endl;
}

Cat &Cat::operator=(const Cat &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	this->_brain = new Brain(*ref.getBrain());
	return (*this);
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}

void	Cat::setType(string change)
{
	this->_type = change;
}
