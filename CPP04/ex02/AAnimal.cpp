#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	cout << "Default Animal Constructor called" << endl;
}

AAnimal::~AAnimal()
{
	cout << "AAnimal Destructor called" << endl;
}

AAnimal::AAnimal(const AAnimal &old_obj)
{
	cout << "AAnimal copy constructor called" << endl;
	*this = old_obj;
}

void AAnimal::makeSound() const
{
	cout << "*Insert Animal Noises*" << endl;
}

const string	&AAnimal::getType( void ) const
{
	return(this->_type);	
}

AAnimal &AAnimal::operator=(const AAnimal &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_type = ref.getType();
	return (*this);
}
