/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:06:41 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/24 12:00:43 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): _v(std::vector<int>(0))
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
T	MutantStack<T>::top()
{
	return (_v.back());
}

template <typename T>
bool	MutantStack<T>::empty()
{
	return (_v.empty());
}

template <typename T>
size_t	MutantStack<T>::size()
{
	return (_v.size());
}

template <typename T>
void	MutantStack<T>::push(const T &value)
{
	_v.push_back(value);
}

template <typename T>
void	MutantStack<T>::pop()
{
	_v.pop_back();
}

template <typename T>
typename std::vector<T>::iterator	MutantStack<T>::begin()
{
	return (_v.begin());
}

template <typename T>
typename std::vector<T>::iterator	MutantStack<T>::end()
{
	return (_v.end());
}

template <typename T>
void	MutantStack<T>::operator=(const MutantStack &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_v = f._v;
}