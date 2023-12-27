/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:27:15 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:27:15 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.h"

void	randomChump( std::string name )
{
	Zombie zomb(name);
	zomb.announce();
}