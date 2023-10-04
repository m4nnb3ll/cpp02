#pragma once

# include <iostream>

class Fixed
{
private:
	int					m_whole;
	static const int	m_fraction = 8;
public:
	Fixed(void); // constructor
	~Fixed(void); // destructor
	Fixed(const Fixed &fixed); // copier
	Fixed	&operator=(const Fixed &rhs); // assigner
	int		getRawBits(void) const;
	void	setRawBits(int raw);
};
