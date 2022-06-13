/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:57:41 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/13 16:36:29 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _num(0), _err(0)
{
	std::cout << "Convert default constructor called" << std::endl;
}

bool isFloat( std::string myString )
{
    std::istringstream	iss(myString);
    float	f;
    
    iss >> std::noskipws >> f;
    return iss.eof() && !iss.fail(); 
}

Convert::Convert(std::string str): _err(0)
{
	std::cout << "Convert constructor called" << std::endl;
	if (isFloat(str))
	{
		_num = std::strtod(str.c_str(), NULL);
		_err = errno;
	}
	else
	{
		if (str.length() > 1)
		{
			std::cout << "Given parameter is not a character or a number" << std::endl;
			exit(1);
		}
		_num = str[0];
	}
	std::cout << _num << std::endl;
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
	if (!_err && std::isprint(_num))
		std::cout << "char: " << static_cast<char>(_num) << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}
