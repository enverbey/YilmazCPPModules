/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:47:13 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:48:08 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string content, std::string s1, std::string s2, std::string fname)
{
	std::ofstream outputFile(fname + ".replace");
	size_t pos = content.find(s1);
	while (pos != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos = content.find(s1);
	}
	outputFile << content;
	outputFile.close();
}

std::string readFileContent(std::ifstream& inputFile)
{
	std::string str;
	std::string satir;

	while (!inputFile.eof() && std::getline(inputFile, satir)) // >> std::noskipws
	{
		str += satir;
		if (!inputFile.eof())
			str += '\n';
	}
	inputFile.close();
	return (str);
}

int main(int ac, char **av)
{
	std::string	str;
	std::string s1;
	std::string s2;
/*argumen control*/
	if (ac != 4)
		return (std::cout << "You have to enter 4 arguments!" << std::endl, -1);
/*open file and control open*/
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
		return (std::cout << "File cannot be opened: " << av[1] << std::endl, -1);
	
	s1 = av[2];
	s2 = av[3];
	
	str = readFileContent(inputFile);
	return (replace(str, s1, s2, av[1]), 0);
}