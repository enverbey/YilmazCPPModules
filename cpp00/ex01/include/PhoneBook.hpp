/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:38:09 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 10:51:47 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook{
	private:
	/*varibales*/
		Contact	_contacts[8];
		int		_i;
	public:
	/*constructor and destructor*/
		PhoneBook(void);
		~PhoneBook(void);
	/*Phone Function*/
		void	add(void);
		void	search(void);
};