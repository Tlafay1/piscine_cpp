/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:25:20 by timothee          #+#    #+#             */
/*   Updated: 2022/07/20 13:15:54 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"

int main(void)
{
	std::list<int> v;
	for (int i = 0; i < 5; ++i)
	{
		v.push_back(i);
	}
	for (std::list<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	std::list<int>::iterator ptr;
	ptr = easyfind(v, 3);
	std::cout << *ptr << std::endl;
	return 0;
}