/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:46:10 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 10:55:03 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/HumanB.hpp"

HumanB::HumanB(std::string argName) : _name(argName){}

HumanB::~HumanB(){}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &argWeapon)
{
	this->weapon = &argWeapon;
}

