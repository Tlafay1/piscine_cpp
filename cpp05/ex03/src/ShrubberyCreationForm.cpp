/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:21:36 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/07 17:28:03 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _target("")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("Shrubbery Creation Form", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = f;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	_target = f._target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	try
	{
		this->isExecutable(executor);
		std::ofstream	file;
		file.open(_target + "_shrubbery");
		std::string	tree;
		tree = "                      ___\n"
		"                _,-'\"\"   \"\"\"\"`--.\n"
		"             ,-'          __,,-- \\\n"
		"           ,'    __,--\"\"\"\"dF      )\n"
		"          /   .-\"Hb_,--\"\"dF      /\n"
		"        ,'       _Hb ___dF\"-._,-'\n"
		"      ,'      _,-\"\"\"\"   \"\"--..__\n"
		"     (     ,-'                  `.\n"
		"      `._,'     _   _             ;\n"
		"       ,'     ,' `-'Hb-.___..._,-'\n"
		"       \\    ,'\"Hb.-'HH`-.dHF\"\n"
		"        `--'   \"Hb  HH  dF\"\n"
		"                \"Hb HH dF\n"
		"                 \"HbHHdF\n"
		"                  |HHHF\n"
		"                  |HHH|\n"
		"                  |HHH|\n"
		"                  |HHH|\n"
		"                  |HHH|\n"
		"                  dHHHb\n"
		"                .dFd|bHb.               o\n"
		"      o       .dHFdH|HbTHb.          o /\n"
		"\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n"
		"##########################################\n";

		file << tree;
		file.close();
	}
	catch (std::exception &e)
	{
		throw;
	}
}
