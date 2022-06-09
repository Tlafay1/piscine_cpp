/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:21:36 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/09 16:12:03 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _target("")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("Robotomy Request Form", 145, 137)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = f;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	_target = f._target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	try
	{
		this->isExecutable(executor);
		srand(time(NULL));
		std::cout << "BBBBBRRRRRRVVVVVVVVVVVV" << std::endl;
		int num = rand() % 2;
		std::cout << num << std::endl;
		if (num)
		{
			std::cout << _target + " were successfully "
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
