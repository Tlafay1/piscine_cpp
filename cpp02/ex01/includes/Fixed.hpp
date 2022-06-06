/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:17:00 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/13 11:20:40 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		void 			operator=(const Fixed &f);
		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;

	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream&	operator<<(std::ostream &os, const Fixed &f);