/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:06:00 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/16 16:23:38 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(): _arr(new T[0]), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n)
{
	std::cout << "Array size constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array default destructor called" << std::endl;
	delete[] _arr;
}

template <typename T>
size_t	Array<T>::size()
{
	return (_size);
}

template <typename T>
T	&Array<T>::operator [](unsigned int i)
{
	if (!_size || i > _size - 1)
		throw std::out_of_range ("Index out of range");
	return _arr[i];
}

template <typename T>
void	Array<T>::operator=(const Array &f)
{
	_arr = f._arr;
	_size = f._size;
}

#endif