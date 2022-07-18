#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->value = 0;
};

Fixed::~Fixed()
{
	cout << "Destructor constructor called" << endl;
}

Fixed::Fixed (const Fixed &old_obj)
{
	cout << "Copy constructor called" << endl;
	value = old_obj.getRawBits();
}

int Fixed::getRawBits( void ) const 
{ 
	cout << "getRawBits member function called" << endl;
	return (this->value); 
}

void Fixed::setRawBits( int const raw ) 
{
	cout << "Copy assignment operator called " << endl;
	this->value = raw;
}