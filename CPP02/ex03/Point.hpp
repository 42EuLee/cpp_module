#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point(const Point &ref);
		Fixed	getX(void) const ;
		Fixed	getY(void) const ;
		Point &operator=(const Point &ref );	
};

bool PointInTriangle(Point const point, Point const a, Point const b, Point const c);

#endif