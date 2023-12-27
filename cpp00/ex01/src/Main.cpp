/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:37:58 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 11:07:50 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Colors.h"
#include <iostream>

void	ft_banner(void)
{
	system("clear");
	std::cout << "/***************************************************************\\" << std::endl;
	std::cout << "/*             There are 3 command you can enter.              *\\" << std::endl;
	std::cout << "/* ----------------------------------------------------------- *\\" << std::endl;
	std::cout << "/* ADD: This command add a new person in PhoneBook             *\\" << std::endl;
	std::cout << "/* SEARCH: This command display all person in PhoneBook person *\\" << std::endl;
	std::cout << "/* EXIT: This command fınısh the program                       *\\" << std::endl;
	std::cout << "/*                                                             *\\" << std::endl;
	std::cout << "/*  -> after ADD, you must enter the requested information     *\\" << std::endl;
	std::cout << "/* in order, you can't enter empty input for the information!! *\\" << std::endl;
	std::cout << "/*  -> after SEARCH, you enter the index number of the person  *\\" << std::endl;
	std::cout << "/* whose information you want to see.                          *\\" << std::endl;
	std::cout << "/* _>there is one more command you can use, clear  MY_BONUS :D *\\" << std::endl;
	std::cout << "/* this command just clean the terminal !!                     *\\" << std::endl;
	std::cout << "/***************************************************************\\\n" << std::endl;
}

int main(void)
{
	std::string str;
	ft_banner();
	PhoneBook list;
	while (str !=  "EXIT")
	{
		put_message_color(BLUE, "Enter a command > ");
		//std::cin >> str;
		getline(std::cin, str);
		if (str == "ADD")
			list.add();
		else if (str == "SEARCH")
			list.search();
		else if (str == "clear" || str == "CLEAR")
		{
			ft_banner();
		}
	}

}