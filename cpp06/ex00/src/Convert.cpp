/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:57:41 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/14 13:04:09 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _num(0)
{
	std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert(std::string str)
{
	char	*err;
	
	std::cout << "Convert constructor called" << std::endl;
	_num = std::strtod(str.c_str(), &err);
	if (*err && !isspace((unsigned char)*err))
	{
		if ((isinf(_num) || isnan(_num)) && *err == 'f')
			return;
		if (str.length() > 1)
		{
			std::cout << "Given parameter is not a character or a number" << std::endl;
			exit(1);
		}
		_num = str[0];
	}
}

Convert::Convert(const Convert &f)
{
	std::cout << "Convert copy constructor called" << std::endl;
	*this = f;
}

Convert::~Convert()
{
	std::cout << "Convert destructor called" << std::endl;
}

void	Convert::operator=(const Convert &f)
{
	std::cout << "Convert copy assignment operator called" << std::endl;
	_num = f._num;
}

void	Convert::print_char()
{
	if (std::isprint(_num))
		std::cout << "char: " << static_cast<char>(_num) << std::endl;
	else if (_num <= std::numeric_limits<char>::max()
		&& _num >= std::numeric_limits<char>::min())
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void	Convert::print_int()
{
	if (_num <= std::numeric_limits<int>::max()
		&& _num >= std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(_num) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	Convert::print_float()
{
	std::cout << std::fixed << std::setprecision(1)
		<< "float: " << static_cast<float>(_num) << 'f' <<std::endl;
}

void	Convert::print_double()
{
	std::cout << std::fixed << std::setprecision(1)
		<< "double: " << _num << std::endl;
}

void	Convert::print()
{
	this->print_char();
	this->print_int();
	this->print_float();
	this->print_double();
}
