#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->value = 0;
};

Fixed::Fixed (const Fixed &old_obj)
{
	cout << "Copy constructor called" << endl;
	value = old_obj.getRawBits();
}

Fixed::Fixed (const int intnum)
{
	cout << "Int constructor called" << endl;
	this->value = (intnum << this->bits);

}

Fixed::Fixed (const float floatnum)
{
	cout << "Float constructor called" << endl;
	this->value = roundf(floatnum * (1 << this->bits));
}

Fixed::~Fixed()
{
	cout << "Destructor constructor called" << endl;
}

int Fixed::toInt( void ) const
{
	return (this->value >> this->bits);
}

float Fixed::toFloat( void ) const
{
	 return ((float)this->value / (float)(1 << this->bits));
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

void Fixed::operator = (const Fixed &eg )
{
	cout << "Copy assignment operator called" << endl;
	value = eg.value;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}