/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:37:49 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/07 17:22:16 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string &name,
			const int &signGrade, const int &execGrade);
		Form(const Form &f);
		virtual ~Form();

		void	operator=(const Form &f);

		void			beSigned(const Bureaucrat &f);
		void			isExecutable(const Bureaucrat &f);
		virtual void	execute(Bureaucrat const &executor) = 0;

		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

	protected:
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(char *msg);
				const char *what() const throw();

			private:
				char	*_msg;
		};

		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(char *msg);
				const char *what() const throw();

			private:
				char	*_msg;
		};

		class IsntSignedException: public std::exception
		{
			public:
				IsntSignedException(char *msg);
				const char *what() const throw();

			private:
				char	*_msg;
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream& operator<< (std::ostream& os, const Form &rhs);

#endif
