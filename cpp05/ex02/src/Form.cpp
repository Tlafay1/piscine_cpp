/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:49:05 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/07 16:53:20 by tlafay           ###   ########.fr       */
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
		throw Form::GradeTooLowException((char *)"Grade is invalid");
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException((char *)"Grade is invalid");
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

Form::GradeTooHighException::GradeTooHighException(char *msg): _msg(msg)
{

}

Form::GradeTooLowException::GradeTooLowException(char *msg): _msg(msg)
{

}

Form::IsntSignedException::IsntSignedException(char *msg): _msg(msg)
{
	
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (_msg);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (_msg);
}

const char	*Form::IsntSignedException::what() const throw()
{
	return (_msg);
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
		throw Form::GradeTooLowException((char *)"Bureaucrat"
			" doesn't have permissions to sign");
}

void	Form::isExecutable(const Bureaucrat &f)
{
	if (!this->getSigned())
		throw Form::IsntSignedException((char *)"The form hasn't been signed");
	if (this->getExecGrade() < f.getGrade())
		throw Form::GradeTooLowException((char *)"Bureaucrat"
			" doesn't have permissions to execute");
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
