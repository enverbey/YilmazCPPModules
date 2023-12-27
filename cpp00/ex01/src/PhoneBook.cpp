/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:37:54 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 11:15:23 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Utils.hpp"
#include "../include/Colors.h"
#include <iomanip>

PhoneBook::PhoneBook()
{
	put_message_color(MAGANTA, "The PhoneBook is created\n");
	this->_i = 0;
}

PhoneBook::~PhoneBook()
{
	put_message_color(MAGANTA, "The PhoneBook is destructed\n");
}

void	PhoneBook::add(void)
{
	Utils utils;

	this->_contacts[_i].set_name(utils.input_name());
	this->_contacts[_i].set_lname(utils.input_lname());
	this->_contacts[_i].set_pName(utils.input_pname());
	this->_contacts[_i].set_phone(utils.input_phone());
	this->_contacts[_i].set_dSecret(utils.input_dsecret());
	this->_i++;
	std::cout << std::endl;
	if (this->_i == 8)
		this->_i = 0;
}

static std::string last_ten(std::string arg)
{
	std::string tmp;

	if(arg.length() > 10)
	{
		tmp = arg.substr(0, 9);
		tmp = tmp + ".";
		return (tmp);
	}
	return (arg);
}

void	PhoneBook::search(void)
{
	Utils utils;
	int x;

	x = 0;
	if (!this->_contacts[x].get_name().length())
	{
		put_message_color(RED, "There is no one in Phone Book !\n\n");
		return ;
	}
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (x < 8)
	{
		if (this->_contacts[x].get_name().length())
		{
			
			std::cout << "|" << std::setw(10) << x ;
			std::cout << "|" << std::setw(10) << last_ten(_contacts[x].get_name()) ;
			std::cout << "|" << std::setw(10) << last_ten(_contacts[x].get_lname()) ;
			std::cout << "|" << std::setw(10) << last_ten(_contacts[x].get_pName()) << "|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
		}
		x++;
	}
	x = utils.input_index();
	if (this->_contacts[x].get_name().length())
	{
		put_message_color(GREEN, "Name : ");
		std::cout << _contacts[x].get_name() << std::endl;
		put_message_color(GREEN, "Last Name : ");
		std::cout << _contacts[x].get_lname() << std::endl;
		put_message_color(GREEN, "Nick Name : ");
		std::cout << _contacts[x].get_pName() << std::endl;
		put_message_color(GREEN, "Phone Number : ");
		std::cout << _contacts[x].get_phone() << std::endl;
		put_message_color(GREEN, "Dark Secret : ");
		std::cout << _contacts[x].get_dSecret() << std::endl << std::endl;
	}
	else
	{
		put_message_color(RED, "There is no one in this Index !\n\n");
	}

}