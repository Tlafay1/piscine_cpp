/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothee <timothee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:25:20 by timothee          #+#    #+#             */
/*   Updated: 2022/06/18 09:11:21 by timothee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	for (int i = 0; i < 5; ++i)
	{
		v.push_back(i);
	}
	for (int i = 0; i < 6; ++i)
	{
		std::cout << v.at(i) << std::endl;
	}
	std::vector<int> ptr;
	ptr = easyfind(v, 3);

	return 0;
}