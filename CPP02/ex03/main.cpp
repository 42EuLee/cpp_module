#include "Fixed.hpp"
#include "Point.hpp"
#include "styling.h"


// use https://www.geogebra.org/m/J6aybGrS for visualisation
int main(void) 
{
	{
		Point	a(0, 0);
		Point	b(3, 0);
		Point	c(3, 3);
		Point	point(3, 3);

		if (PointInTriangle(point, a, b, c))
			cout << GRN <<"<Point is in the triangle>" << endl;
		else
			cout << RED <<"<Point is not in the triangle>" << endl;
		cout << RESET;
	}
	return (0);
}