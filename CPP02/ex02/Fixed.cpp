#include "Fixed.hpp"

Fixed::Fixed()
{
	// cout << "Default constructor called" << endl;
	this->_value = 0;
};

Fixed::Fixed (const Fixed &ref)
{
	// cout << "Copy constructor called" << endl;
	*this = ref;
}

Fixed::Fixed (const int intnum)
{
	// cout << "Int constructor called" << endl;
	this->_value = (intnum << this->_bits);

}

Fixed::Fixed (const float floatnum)
{
	// cout << "Float constructor called" << endl;
	this->_value = roundf(floatnum * (1 << this->_bits));
}

Fixed::~Fixed()
{
	// cout << "Destructor called" << endl;
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->_bits);
}

float Fixed::toFloat( void ) const
{
	 return ((float)this->_value / (float)(1 << this->_bits));
}

int Fixed::getRawBits( void ) const 
{ 
	// cout << "getRawBits member function called" << endl;
	return (this->_value); 
}

void Fixed::setRawBits(int const raw) 
{
	this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &ref )
{
	// cout << "Copy assignment operator called" << endl;
	this->_value = ref.getRawBits();
	return (*this);
}

Fixed Fixed::operator + (const Fixed &plus)
{
	Fixed value(*this); // creating a clone

	value.setRawBits(this->getRawBits() + plus.getRawBits());
	return (value);
}

Fixed Fixed::operator - (const Fixed &minus)
{
	Fixed value(*this);

	value.setRawBits(this->getRawBits() - minus.getRawBits());
	return (value);
}

Fixed Fixed::operator * (const Fixed &multiply)
{
	Fixed value;

	value = this->toFloat() * multiply.toFloat();
	return (value);
}

Fixed Fixed::operator / (const Fixed &divide)
{
	Fixed value;

	value = this->toFloat() / divide.toFloat();
	return (value);
}

bool Fixed::operator < (const Fixed &ops) const
{
	return (this->_value < ops._value);
}

bool Fixed::operator <= (const Fixed &ops) const
{
	return (this->_value <= ops._value);
}

bool Fixed::operator > (const Fixed &ops) const
{
	return (this->_value > ops._value);
}

bool Fixed::operator >= (const Fixed &ops) const
{
	return (this->_value >= ops._value);
}

bool Fixed::operator == (const Fixed &ops) const
{
	return (this->_value == ops._value);
}

bool Fixed::operator != (const Fixed &ops) const
{
	return (this->_value != ops._value);
}

Fixed Fixed::operator ++ ()
{
	this->_value++;
	return(*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed val(*this);

	this->_value++;
	return(val);
}

Fixed Fixed::operator -- (int)
{
	Fixed val(*this);

	this->_value--;
	return(val);
}

Fixed Fixed::operator -- ()
{
	this->_value--;
	return(*this);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}


std::ostream &operator<<(std::ostream &out, Fixed const &ref)
{
    out << ref.toFloat();
    return (out);
}