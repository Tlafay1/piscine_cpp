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
#include <iomanip>
#include <cmath>

class Convert
{
	public:
		Convert();
		Convert(const Convert &f);
		Convert(std::string str);
		~Convert();

		void	operator=(const Convert &f);

		void	print();

	private:
		double	_num;

		void	print_char();
		void	print_int();
		void	print_float();
		void	print_double();
};

#endif