#include "Point.hpp"

Point::Point()
{
	// cout << "Default constructor called" << endl;
	this->_x = 0;
	this->_y = 0;
}

Point::~Point()
{
	// cout << "Point destructor called" << endl;
}

Point::Point(float x, float y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}


Point::Point(const Point &ref)
{
	// cout << "Copy constructor called" << endl;
	*this = ref;
}

Point &Point::operator=(const Point &ref)
{
	// cout << "Copy assignment operator called" << endl;
	this->_x = ref.getX();
	this->_y = ref.getY();
	return (*this);
}

Fixed	Point::getX(void) const 
{
	return (this->_x);
}

Fixed	Point::getY(void) const 
{
	return (this->_y);
}

