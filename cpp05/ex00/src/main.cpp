/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:21:40 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/31 11:09:55 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bob("Bob", 150);
		Bob.upGrade();
		std::cout << Bob.getGrade() << std::endl;
		std::cout << Bob.getName() << std::endl;
		std::cout << Bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception catched" << std::endl;
		std::cout << e.what() << std::endl;
	}
	return 0;
}