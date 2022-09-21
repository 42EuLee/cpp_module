// #include "Fixed.hpp"
#include "Point.hpp"

Fixed sign(Point const a, Point const b, Point const c)
{
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool PointInTriangle(Point const point, Point const a, Point const b, Point const c)
{
	Fixed d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;


	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	if (d1 == 0 && d2 == 0 && d3 == 0)
		return(false);
	return !(has_neg && has_pos);
}

int main(void) 
{
	Point	a(10,0);
	Point	b(0,0);
	Point	c(0,0);
	Point	point(100,100);
	cout << PointInTriangle(point, a, b, c) << endl;
	return (0);
}