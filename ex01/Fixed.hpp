#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					m_whole;
	static const int	m_fraction = 8;
public:
	Fixed(void); // constructor
	Fixed(const int); // integer constructor
	Fixed(const float); // float constructor
	~Fixed(void); // destructor
	Fixed(const Fixed &fixed); // copier
	Fixed	&operator=(const Fixed &rhs); // assigner
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed);
