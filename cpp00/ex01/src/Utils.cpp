/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:37:51 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 11:00:20 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Utils.hpp"
#include "../include/Colors.h"
#include <cctype>
#include <iostream>

Utils::Utils()
{}

Utils::~Utils()
{}

/*cout message and take input functions*/

std::string get_answer(std::string message)
{
	std::string str;

	str = "";
	while (str == "")
	{
		put_message_color(YELLOW, message);
		getline(std::cin, str);
		if (str.find_first_not_of(' '))
		{
			put_message_color(RED, "Please dont enter input start with space\n");
			str = "";
		}
	}
	return (str);
}
   

int	get_answer_int(std::string message)
{
	std::string str;
    int input;

	while (1)
	{
		put_message_color(YELLOW, message);
    	std::getline(std::cin, str);
		try 
		{
			input = std::stoi(str);
			if (!(7 >= input && input >= 0))
				put_message_color(RED, "This phone have just 8 contac!!\n\n");
			else
				return(input);
		} catch (const std::invalid_argument& e) {
			put_message_color(RED, "Error: Invalid integer input!\n");
		} catch (const std::out_of_range& e) {
			put_message_color(RED, "Error: Entered integer is out of range!\n");
		}
	}
	return (input);
}

/*take input functions*/

std::string	Utils::input_name(void)
{
	return(get_answer("Enter Name: > "));
}

std::string	Utils::input_lname(void)
{
	return(get_answer("Enter Last Name: > "));
}

std::string	Utils::input_pname(void)
{
	return(get_answer("Enter Nick Name: > "));
}

std::string	Utils::input_phone(void)
{
	return(get_answer("Enter Phone Number: > "));
}

std::string	Utils::input_dsecret(void)
{
	return(get_answer("Dark Secret: > "));
}

int	Utils::input_index(void)
{
	return (get_answer_int("Enter Index: > "));
}