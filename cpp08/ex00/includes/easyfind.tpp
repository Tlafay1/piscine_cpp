/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothee <timothee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:27:42 by timothee          #+#    #+#             */
/*   Updated: 2022/06/18 09:24:03 by timothee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T &cont, int to_find)
{
	return std::find(cont.begin(), cont.end(), to_find);
}

#endif

