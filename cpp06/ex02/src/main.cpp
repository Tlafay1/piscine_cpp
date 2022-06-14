/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:32:43 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/14 15:55:33 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "Returned A" << std::endl;
		return (new A);
	}
	if (i == 1)
	{
		std::cout << "Returned B" << std::endl;
		return (new B);
	}
	std::cout << "Returned C" << std::endl;
	return (new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is C" << std::endl;

}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Type is B" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Type is C" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

int main(void)
{
	srand(time(0));
	identify(generate());
	identify(*generate());	
	return 0;
}