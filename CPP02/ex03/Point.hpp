#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		~Point();
		float sign(Point const a, Point const b, Point const c);
		bool PointInTriangle (Point const a, Point const b, Point const c, Point const point);
}