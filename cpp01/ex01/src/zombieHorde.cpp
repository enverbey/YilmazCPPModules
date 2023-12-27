/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:26:46 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:26:46 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];

	for (int i=0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}