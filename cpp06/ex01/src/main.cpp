/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:02:25 by tlafay            #+#    #+#             */
/*   Updated: 2022/06/14 14:15:52 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

struct Data
{
	int		data1;
	char	*data2;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data		data;
	Data		*other;
	uintptr_t	raw;

	data.data1 = 2;
	data.data2 = (char *)"Wassup";
	std::cout << &data << std::endl;
	raw = serialize(&data);
	other = deserialize(raw);
	std::cout << other << std::endl;
	std::cout << other->data1 << '\n' << other->data2 << std::endl;
	return 0;
}