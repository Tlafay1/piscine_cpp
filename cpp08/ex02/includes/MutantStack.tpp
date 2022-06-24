/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:06:41 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/24 15:38:10 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
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
void	MutantStack<T>::operator=(const MutantStack &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)f;
}