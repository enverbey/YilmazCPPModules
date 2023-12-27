/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:27:13 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:27:13 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.h"

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}