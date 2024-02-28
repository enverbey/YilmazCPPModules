/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:23:41 by enveryilmaz       #+#    #+#             */
/*   Updated: 2024/02/26 21:54:19 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

void pressEnter(){
	cout << endl << "press ENTER to constinue" << endl;
	cin.ignore();
	cout << "\033c";
}

int main(){
	cout << "\033c";
	
	Bureaucrat* enver = new Bureaucrat("Enver", 50);
	try{
		//Test 1 | Everything is okay.
		cout << "Starting -> " <<*enver << endl << "    >>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << endl;

		cout << "trying to increment 10" << endl;
		enver->incrementGrade(10);
		cout << "After increment -> " <<*enver << endl;
	
		cout << "trying to decrement 40" << endl;
		enver->decrementGrade(40);
		cout << "After decrement -> " <<*enver << endl;
	}catch(const exception &e){
		cout << e.what() << endl;
	}

	pressEnter();

	try{
		cout << "Starting -> " <<*enver << endl << "    >>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << endl;

		cout << "trying to decrement 70" << endl;
		enver->decrementGrade(70);
		cout << "After decrement -> " <<*enver << endl;
		
		cout << endl;
		
		cout << "trying to decrement 1" << endl;
		enver->decrementGrade(1);
		cout << "After decrement -> " <<*enver << endl;
	}catch(const exception &e){
		cout << e.what() << endl;
	}catch(...){
		cout << "Catch didn't catch !! :)" << endl;
	}

	pressEnter();
	
	try{
		cout << "Starting -> " <<*enver << endl << "    >>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << endl;

		cout << "trying to increment 149" << endl;
		enver->incrementGrade(149);
		cout << "After increment -> " <<*enver << endl;

		cout << endl;

		cout << "trying to increment 1" << endl;
		enver->incrementGrade(1);
		cout << "After increment -> " <<*enver << endl;
	}catch(const exception &e){
		cout << e.what() << endl;
	}catch(...){
		cout << "Catch didn't catch !! :)" << endl;
	}

	delete enver;
}