/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:38:25 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/08 13:46:36 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	_grade = grade;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &f): _name(f._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = f;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

void	Bureaucrat::operator=(const Bureaucrat &f)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	_grade = f._grade;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::upGrade()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::downGrade()
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << _name + " signed " + f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name + " couldn't sign " + f.getName()
			+ " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form &f)
{
	try
	{
		f.execute(*this);
		std::cout << _name + " executed " + f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't execute " << f.getName()
			<< " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is too low");
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat &rhs)
{
	os << rhs.getName() +  ", bureaucrat grade "  << rhs.getGrade();
	return (os);
}
