/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:49:05 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/06 17:44:27 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name(""), _signed(false), _signGrade(150), _execGrade(15)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, const int &signGrade,
	const int &execGrade): _name(name), _signed(false),
	_signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form constructor called" << std::endl;
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &f): _name(""), _signGrade(f._signGrade),
	_execGrade(f._execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = f;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

void	Form::operator=(const Form &f)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	_signed = f._signed;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getSigned() const
{
	return (_signed);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

void	Form::beSigned(const Bureaucrat &f)
{
	if (f.getGrade() <= _signGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<< (std::ostream& os, const Form& rhs)
{
	std::string	is_signed;
	if (rhs.getSigned())
		is_signed = " is signed";
	else
		is_signed = " isn't signed";
	os << rhs.getName() + is_signed + ", has to be signed by a grade "
		<< rhs.getSignGrade() << " and executed by a grade "
		<< rhs.getExecGrade() << '.';
	return (os);
}
