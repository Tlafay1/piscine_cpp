/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:34:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/17 13:32:46 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(Fixed()), _y(Fixed())
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float &f1, const float &f2): _x(Fixed(f1)), _y(Fixed(f2))
{
	std::cout << "Floats constructor called" << std::endl;
}

Point::Point(const Point &p): _x(p._x), _y(p._y)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

Point	&Point::operator=(const Point &p)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)p;
	return (*this);
}

float	Point::get_x() const
{
	return _x.toFloat();
}

float	Point::get_y() const
{
	return _y.toFloat();
}

float sign (Point p1, Point p2, Point p3)
{
	return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y())
	- (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}
