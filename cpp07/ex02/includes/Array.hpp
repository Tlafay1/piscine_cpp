/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:06:04 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/16 16:23:33 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &f);
		~Array();

		void	operator=(const Array &f);
		T		&operator [](unsigned int i);

		size_t	size();

	private:
		T		*_arr;
		size_t	_size;
		
};

#include "Array.tpp"

#endif






