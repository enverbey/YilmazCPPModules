/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:27:11 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:27:11 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include "../include/Zombie.h"

int main()
{
	Zombie x("Foo");
	Zombie y("Boo");
	Zombie *z;
	x.announce();
	y.announce();
	z = newZombie("Zoo");
	z->announce();
	delete (z);
	randomChump("Random Zomb");
}