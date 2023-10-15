#include "Point.hpp"

float	det(Point u, Point v)
{
	return ((u.getX() * v.getY() - u.getY() * v.getX()).toFloat());
}

bool	Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	w1, w2, d;

	d = det(b-a, c-a);
	if (!d)
		return (false);
	w1 = (det(point, c-a) - det(a, c-a)) / d;
	w2 = -(det(point, b-a) - det(a, b-a)) / d;
	return (w1 > 0 && w2 > 0 && w1 + w2 < 1);
}
