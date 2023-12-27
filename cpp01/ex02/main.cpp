/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:26:18 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:26:18 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	//output of memory adress
	std::cout << "Memory adress of str : " << &str << std::endl;
	std::cout << "Memory adress of stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory adress of stringREF : " << &stringREF << std::endl;

	//output of variables's value
	std::cout << "Value of str" << str << std::endl;
	std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;
  return 0;
}