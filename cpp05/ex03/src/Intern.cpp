/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:36 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/09 16:01:32 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &f)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = f;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

void	Intern::operator=(const Intern &f)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	(void)f;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form  *forms[] = {
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target),
		new PresidentialPardonForm(target),
	};

	std::string	f_names[] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == f_names[i])
		{
			for (int j = i + 1; j < 3; j++)
				delete forms[j];
			return forms[i];
		}
		delete forms[i];
	}
	std::cout << "An invalid form has been given" << std::endl;
	return NULL;
}