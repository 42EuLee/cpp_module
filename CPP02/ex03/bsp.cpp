#include "Point.hpp"
#include "Fixed.hpp"

// int checkBorderCoor(Point const coords, Point const point)
// {
// 	if ((coords.getX() == point.getX()) && (coords.getY() == point.getY()))
// 		return (1);
// 	return (0);
// }

Fixed sign(Point const a, Point const b, Point const c)
{
	// cout << "a.X [" << a.getX() << "] ";
	// cout << "a.Y [" << a.getY() << "] " << endl;
	// cout << "b.X [" << b.getX() << "] ";
	// cout << "b.Y [" << b.getY() << "] " << endl;
	// cout << "c.X [" << c.getX() << "] ";
	// cout << "c.Y [" << c.getY() << "] \n" << endl;
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool PointInTriangle(Point const point, Point const a, Point const b, Point const c)
{
	Fixed	d1, d2, d3;
	bool	has_neg, has_pos;

	// if (checkBorderCoor(a, point) || checkBorderCoor(b, point) || checkBorderCoor(c, point))
	// 	return (false);

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
	has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);
	if (d1 == 0 && d2 == 0 && d3 == 0)
		return (false);
	return !(has_neg && has_pos);
}