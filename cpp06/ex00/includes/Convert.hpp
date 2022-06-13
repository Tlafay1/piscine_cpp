/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:30:28 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/13 16:33:37 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <climits>
#include <cfloat>
#include <cmath>
#include <string>
#include <sstream>

class Convert
{
	public:
		Convert();
		Convert(const Convert &f);
		Convert(std::string str);
		~Convert();

		void	operator=(const Convert &f);

	private:
		double	_num;
		int		_err;

		void	print_char();
		void	print_int();
		void	print_float();
		void	print_double();
};

#endif