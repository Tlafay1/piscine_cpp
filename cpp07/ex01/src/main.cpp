/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:23:58 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/16 11:13:57 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void	sayHello(T &t)
{
	std::cout << "Hello " << t << std::endl;
}

int main(void)
{
	char	a[] = "123abc";
	int		b[] = {1, 2, 3, 10};
	std::string names[] = {"James", "Bob", "Patrick"};
	iter(a, 6, sayHello);
	iter(b, 4, sayHello);
	iter(names, 3, sayHello);
	return 0;
}