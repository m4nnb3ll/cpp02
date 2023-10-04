/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:16:18 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/04 12:50:27 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
	: m_whole(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float n)
	: m_whole((int)roundf(n * (1 << m_fraction)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int n)
	: m_whole(n * (1 << m_fraction))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		m_whole = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (m_whole);
}

float	Fixed::toFloat(void) const
{
	return (getRawBits() / (float)(1 << m_fraction));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> m_fraction);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
