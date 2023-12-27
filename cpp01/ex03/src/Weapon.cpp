/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:46:06 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 10:46:06 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string arg)
{
	this->_type = arg;
}

Weapon::~Weapon()
{}

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string arg)
{
	this->_type = arg;
}