#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->_value = 0;
};

Fixed::~Fixed()
{
	cout << "Destructor constructor called" << endl;
}

Fixed::Fixed (const Fixed &ref)
{
	cout << "Copy constructor called" << endl;
	*this = ref;
}

Fixed::Fixed (const int intnum)
{
	cout << "Int constructor called" << endl;
	this->_value = (intnum << this->_bits);

}

Fixed::Fixed (const float floatnum)
{
	cout << "Float constructor called" << endl;
	this->_value = roundf(floatnum * (1 << this->_bits));
}


int Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

float Fixed::toFloat(void) const
{
	 return ((float)this->_value / (float)(1 << this->_bits));
}

int Fixed::getRawBits(void) const 
{ 
	cout << "getRaw_bits member function called" << endl;
	return (this->_value); 
}

void Fixed::setRawBits(int const raw) 
{
	cout << "Copy assignment operator called " << endl;
	this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &ref )
{
	cout << "Copy assignment operator called" << endl;
	this->_value = ref.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &_value)
{
    out << _value.toFloat();
    return (out);
}