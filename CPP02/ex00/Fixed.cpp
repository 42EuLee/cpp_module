#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->_value = 0;
};

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &ref)
{
	cout << "Copy constructor called" << endl;
	*this = ref;
}

int Fixed::getRawBits(void) const 
{ 
	cout << "getRawBits member function called" << endl;
	return (this->_value); 
}

void Fixed::setRawBits(int const raw) 
{
	this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	cout << "Copy assignment operator called" << endl;
	this->_value = ref.getRawBits();
	return (*this);
}