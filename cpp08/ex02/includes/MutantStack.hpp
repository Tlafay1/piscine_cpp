/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:06:40 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/24 15:47:23 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
	using std::stack<T>::c;
	public:
		typedef typename std::deque<T>::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack &f);
		~MutantStack();
		iterator begin() { return std::begin(c); }
    	iterator end() { return std::end(c); }

		void	operator=(const MutantStack &f);

	private:

};

#include "MutantStack.tpp"

#endif