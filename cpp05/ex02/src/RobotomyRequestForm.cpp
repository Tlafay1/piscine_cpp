/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:21:36 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/08 17:56:12 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _target("")
{
	std::cout << "Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("Robotomy Request Form", 145, 137)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called" << std::endl;
}

void	RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	try
	{
		this->isExecutable(executor);
		srand(time(NULL));
		std::cout << "BBBBBRRRRRRVVVVVVVVVVVV" << std::endl;
		if ((float) rand() / RAND_MAX)
		{
			std::cout << _target + "were successfully "
				"robotomised. Yikes." << std::endl;
		}
		else
		{
			std::cout << "Operation failed, we'll "
				"get 'em next time." << std::endl;
		}
	}
	catch (std::exception &e)
	{
		throw;
	}
}
