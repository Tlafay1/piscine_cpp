/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:05:29 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/17 10:46:22 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
	Array <int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	Array<int> a(100);
	Array<int> b = a;
	Array<int> c(a);
	b[10] = c[10] = 9001;
	a[10] = 42;
	if (b[10] == a[10] || c[10] == a[10])
	{
		std::cout << "This is not a deep copy !" << std::endl;
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	return 0;
}
