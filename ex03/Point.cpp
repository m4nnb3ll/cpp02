#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float a, float b) : x(a), y(b) {}

Point::~Point(){}

Point::Point(const Point &pt)
	: x(pt.getX()), y(pt.getY()) {}

Point& Point::operator=(const Point& pt){ return (*this); }

const Fixed&	Point::getX() const
{ return (this->x); }

const Fixed&	Point::getY() const
{ return (this->y); }

Point	Point::operator-(const Point &rhs) const
{
	float	x, y;

	x = (this->getX() - rhs.getX()).toFloat();
	y = (this->getY() - rhs.getY()).toFloat();
	return (Point(x, y));
}
