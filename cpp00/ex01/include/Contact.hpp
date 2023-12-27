/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:38:11 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 10:38:11 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact{
	private:
	/*variables*/
		std::string _name;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkSecret;
	public:
	/*constructor and destructor*/
		Contact(void);
		~Contact(void);
	/*	Setters	*/
		void	set_name(std::string arg);
		void	set_lname(std::string arg);
		void	set_pName(std::string arg);
		void	set_phone(std::string arg);
		void	set_dSecret(std::string arg);
	/*	Getters	*/
		std::string	get_name(void);
		std::string	get_lname(void);
		std::string	get_pName(void);
		std::string	get_phone(void);
		std::string	get_dSecret(void);
};