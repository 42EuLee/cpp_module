#include "Point.hpp"

Point::Point() : _x(0) , _y(0)
{
	// cout << "Default constructor called" << endl;
}

Point::~Point()
{
	// cout << "Point destructor called" << endl;
}

Point::Point(const float x, const float y)
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

