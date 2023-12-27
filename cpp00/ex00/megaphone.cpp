/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:38:19 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 10:40:06 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i=1; av[i]; i++)
		{
			for (int j=0; av[i][j]; j++)
			{
				std::cout << (char)toupper(av[i][j]);
			}
		}
	}
	return (std::cout << std::endl, 0);
}
