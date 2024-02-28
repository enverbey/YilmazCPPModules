/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:23:41 by enveryilmaz       #+#    #+#             */
/*   Updated: 2024/02/28 00:58:16 by enveryilmaz      ###   ########.fr       */
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
	
	try{
		Bureaucrat tayyib("Erdoğan", 1);
		Form anayasa("Ana yasa", 3, 3);

		cout << anayasa << endl;

		tayyib.signForm(anayasa);

		cout << anayasa << endl;

	}catch(exception &e){
		cout << e.what() << endl;
	}

	pressEnter();
	
	try{
		Bureaucrat bahceli("Bahceli", 14);
		Form anayasa("Ana yasa", 3, 3);

		cout << anayasa << endl;

		bahceli.signForm(anayasa);

		cout << anayasa << endl;

	}catch(exception &e){
		cout << e.what() << endl;
	}
}