/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:17:22 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/13 16:00:30 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed::Fixed(const float num): _value(roundf(num * (1 << _bits)))
{
	
}

Fixed::Fixed(const int num): _value(roundf((float)num * (1 << _bits)))
{
	
}

Fixed::~Fixed()
{
	
}

int		Fixed::getRawBits() const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((int)_value / (pow(2, _bits)));
}

int	Fixed::toInt(void) const
{
	return (floor(toFloat()));
}

void	Fixed::operator=(const Fixed &f)
{
	_value = f.getRawBits();
}

std::ostream	&operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp._value = _value++;
	return tmp;
}

Fixed	Fixed::operator++()
{
	++_value;
	return *this;
}

bool	Fixed::operator==(const Fixed &f)
{
	return (_value == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed &f)
{
	return !(*this == f);
}

bool	Fixed::operator<(const Fixed &f)
{
	return (_value < f.getRawBits());
}

bool	Fixed::operator>(const Fixed &f)
{
	return (_value > f.getRawBits());
}

bool	Fixed::operator<=(const Fixed &f)
{
	return (_value <= f.getRawBits());
}

bool	Fixed::operator>=(const Fixed &f)
{
	return (_value >= f.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &f)
{
	return (Fixed(f.toFloat() + this->toFloat()));
}

Fixed	Fixed::operator-(const Fixed &f)
{
	return (Fixed(f.toFloat() - this->toFloat()));
}

Fixed	Fixed::operator*(const Fixed &f)
{
	return (Fixed(f.toFloat() * this->toFloat()));
}

Fixed	Fixed::operator/(const Fixed &f)
{
	return (Fixed(f.toFloat() / this->toFloat()));
}

Fixed	Fixed::min(Fixed &f1, Fixed &f2)
{
	return ((f1 < f2) ? f1 : f2);
}

Fixed	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return (((Fixed)f1 < (Fixed)f2) ? f1 : f2);
}

Fixed	Fixed::max(Fixed &f1, Fixed &f2)
{
	return ((f1 > f2) ? f1 : f2);
}

Fixed	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return (((Fixed)f1 > (Fixed)f2) ? f1 : f2);
}