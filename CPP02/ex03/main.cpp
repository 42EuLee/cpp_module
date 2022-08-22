// #include "Fixed.hpp"
#include "Point.hpp"

Fixed sign(Point const a, Point const b, Point const c)
{
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool PointInTriangle(Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}

int main(void) 
{
	Point	a(0,0);
	Point	b(5,5);
	Point	c(10, 10);
	Point	point(4,4);
	cout << PointInTriangle(a, b, c, point) << endl;
	return (0);
}