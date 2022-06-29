/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:32:57 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/09 16:03:40 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

//Bureaucrat.cpp:95

int main(void)
{
	Intern someRandomIntern;
	Bureaucrat Bob("Bob", 1);
	Form* rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	try
	{
		if (!rrf)
			return (0);
		rrf->beSigned(Bob);
		rrf->execute(Bob);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}