#pragma once

#include "Fixed.hpp"

class	Point
{
public:
	Point();
	Point(const float x, const float y);
	~Point();
	Point(const Point &pt);
	Point&			operator=(const Point& pt);
	Point			operator-(const Point &rhs) const;
	const Fixed&	getX() const;
	const Fixed&	getY() const;
	static bool		bsp(Point const a, Point const b, Point const c, Point const point);
private:
	const Fixed x, y;
};
