/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:32:57 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/08 11:58:06 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

//Bureaucrat.cpp:95

int main(void)
{
	PresidentialPardonForm	p("P_form");
	RobotomyRequestForm		r("R_form");
	ShrubberyCreationForm	s("S_form");

	{
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Jim("Jim", 1);
		try
		{
			Bob.signForm(p);
			Jim.executeForm(p);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Bureaucrat	Bob("Bob", 12);
		Bureaucrat	Jim("Jim", 10);
		try
		{
			Bob.signForm(r);
			Jim.executeForm(r);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Bureaucrat	Bob("Bob", 12);
		Bureaucrat	Jim("Jim", 10);
		try
		{
			Bob.signForm(s);
			Jim.executeForm(s);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}