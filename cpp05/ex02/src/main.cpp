/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:23:41 by enveryilmaz       #+#    #+#             */
/*   Updated: 2024/02/28 12:44:04 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

void pressEnter(){
	cout << endl << "press ENTER to constinue" << endl;
	cin.ignore();
	cout << "\033c";
}

int main(){
	cout << "\033c";

	Bureaucrat karahanli("Mehmet", 3);
	Bureaucrat cakir("Suleyman", 20);

	ShrubberyCreationForm northForm("North Pole");
	try{
		cakir.signForm(northForm);
		cakir.executeForm(northForm);
	}
	catch(exception &e){
		cout << e.what() << endl;
	}
	pressEnter();

	RobotomyRequestForm tree("TREE");
	try{
		cakir.signForm(tree);
		cakir.executeForm(tree);
	}
	catch(exception &e){
		cout << e.what() << endl;
	}
	pressEnter();

	PresidentialPardonForm hobbala("Hobbala");
	try{
		cakir.signForm(hobbala);
		cakir.executeForm(hobbala);
	}catch(exception&  e)
	{
		cout << e.what() << endl;
	}
}