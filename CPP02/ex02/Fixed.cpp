#include "Fixed.hpp"

Fixed::Fixed()
{
	// cout << "Default constructor called" << endl;
	this->value = 0;
};

Fixed::Fixed (const Fixed &old_obj)
{
	// cout << "Copy constructor called" << endl;
	this->value = old_obj.getRawBits();
}

Fixed::Fixed (const int intnum)
{
	// cout << "Int constructor called" << endl;
	this->value = (intnum << this->bits);

}

Fixed::Fixed (const float floatnum)
{
	// cout << "Float constructor called" << endl;
	this->value = roundf(floatnum * (1 << this->bits));
}

Fixed::~Fixed()
{
	// cout << "Destructor called" << endl;
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
	// cout << "getRawBits member function called" << endl;
	return (this->value); 
}

void Fixed::setRawBits( int const raw ) 
{
	// cout << "Copy assignment operator called " << endl;
	this->value = raw;
}

void Fixed::operator = (const Fixed &eg )
{
	// cout << "Copy assignment operator called" << endl;
	value = eg.value;
}

Fixed Fixed::operator + (const Fixed &plus)
{
	Fixed value(*this); // creating a clone

	value.setRawBits(this->toFloat() + plus.getRawBits());
	return (value);
}

Fixed Fixed::operator - (const Fixed &minus)
{
	Fixed value(*this);

	value.setRawBits(this->toFloat() + minus.getRawBits());
	return (value);
}

Fixed Fixed::operator * (const Fixed &multiply)
{
	Fixed value(*this);

	value.setRawBits(this->toFloat() * multiply.getRawBits());
	return (value);
}

Fixed Fixed::operator / (const Fixed &divide)
{
	Fixed value(*this);

	value.setRawBits(this->toFloat() / divide.getRawBits());
	return (value);
}

bool Fixed::operator < (const Fixed &ops) const
{
	return (this->value < ops.value);
}

bool Fixed::operator <= (const Fixed &ops)
{
	return (this->value <= ops.value);
}

bool Fixed::operator > (const Fixed &ops) const
{
	return (this->value > ops.value);
}

bool Fixed::operator >= (const Fixed &ops)
{
	return (this->value >= ops.value);
}

bool Fixed::operator == (const Fixed &ops)
{
	return (this->value == ops.value);
}

bool Fixed::operator != (const Fixed &ops)
{
	return (this->value != ops.value);
}

Fixed Fixed::operator ++ ()
{
	this->value++;
	return(*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed val(*this);

	this->value++;
	return(val);
}

Fixed Fixed::operator -- (int)
{
	Fixed val(*this);

	this->value--;
	return(val);
}

Fixed Fixed::operator -- ()
{
	this->value--;
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


std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}
