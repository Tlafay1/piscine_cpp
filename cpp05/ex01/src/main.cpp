/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:21:40 by tlafay            #+#    #+#             */
/*   Updated: 2022/05/31 14:35:28 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form form("form", 1, 1);
		Bureaucrat Bob("Bob", 1);
		// Bob.downGrade();
		std::cout << Bob << std::endl;
		Bob.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception catched" << std::endl;
		std::cout << e.what() << std::endl;
	}
	return 0;
}