/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:30:19 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/17 16:46:20 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"


class Point
{
	public:
		Point();
		Point(const Point &p);
		Point(const float &f1, const float &f2);
		~Point();

		Point	&operator=(const Point &p);
		float	get_x() const;
		float	get_y() const;

	private:
		const Fixed	_x;
		const Fixed	_y;		
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif