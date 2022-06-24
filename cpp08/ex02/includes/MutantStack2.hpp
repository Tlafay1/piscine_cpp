/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:06:40 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/24 15:03:06 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>


template <typename T>
class MutantStack
{
	public:
		typedef typename std::vector<T>::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack &f);
		~MutantStack();

		T			top();
		bool		empty();
		size_t		size();
		void		push(const T &value);
		void		pop();
		iterator 	begin();
		iterator 	end();

		void	operator=(const MutantStack &f);

	private:
		std::vector<T> _v;
};

#include "MutantStack.tpp"

#endif