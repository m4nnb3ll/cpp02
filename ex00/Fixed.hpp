#pragma once

# include <iostream>

class Fixed
{
public:
	Fixed(); // constructor
	~Fixed(); // destructor
	Fixed(const Fixed &fixed); // copy
	Fixed	&operator=(const Fixed &rhs); // copy assign
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					m_whole;
	static const int	m_fraction = 8;
};
