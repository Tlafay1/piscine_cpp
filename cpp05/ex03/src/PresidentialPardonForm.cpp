/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:21:37 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/08 11:41:34 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _target("")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = f;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	Form("Presidential Pardon Form", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	_target = f._target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	try
	{
		this->isExecutable(executor);
		std::cout << _target + " has been forgiven by Zaphod Beeblerox" << std::endl;
	}
	catch (std::exception &e)
	{
		throw;
	}
}
