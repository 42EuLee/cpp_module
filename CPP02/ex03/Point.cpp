#include "Point.hpp"

Point::Point() : x(0) , y(0)
{
	// cout << "Default constructor called" << endl;
}

Fixed::Fixed (const Fixed &old_obj)
{
	// cout << "Copy constructor called" << endl;
	value = old_obj.getRawBits();
}

Point::~Point(){}



float Point::sign(Point const a, Point const b, Point const c)
{
	return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool Point::PointInTriangle(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(pt, v1, v2);
	d2 = sign(pt, v2, v3);
	d3 = sign(pt, v3, v1);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}