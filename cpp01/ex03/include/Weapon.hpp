/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:45:43 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 10:45:43 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
	private:
	/*variables*/
		std::string _type;
	public:
	/*constructor and destructor*/
		Weapon(std::string arg);
		~Weapon();
		const std::string &getType(void);
		void	setType(std::string arg);

};

#endif