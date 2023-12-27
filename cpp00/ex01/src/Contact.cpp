/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:38:00 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 10:53:29 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

/*Constructor and Destructure*/

Contact::Contact()
{}

Contact::~Contact()
{}

/*setters*/

void	Contact::set_name(std::string arg)
{
	this->_name = arg;
}

void	Contact::set_lname(std::string arg)
{
	this->_lastName = arg;
}

void	Contact::set_pName(std::string arg)
{
	this->_nickName = arg;
}

void	Contact::set_phone(std::string arg)
{
	this->_phoneNumber = arg;
}

void	Contact::set_dSecret(std::string arg)
{
	this->_darkSecret = arg;
}

/*getters*/

std::string	Contact::get_name(void)
{
	return (this->_name);
}

std::string Contact::get_lname(void)
{
	return (this->_lastName);
}

std::string Contact::get_pName(void)
{
	return (this->_nickName);
}

std::string Contact::get_phone(void)
{
	return (this->_phoneNumber);
}

std::string Contact::get_dSecret(void)
{
	return (this->_darkSecret);
}
