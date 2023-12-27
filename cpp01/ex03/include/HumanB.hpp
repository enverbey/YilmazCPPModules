/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:32:06 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 10:53:50 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
	/*variables*/
		std::string _name;
		Weapon	*weapon;
	public:
	/*constructor and destructor*/
		HumanB(std::string argName);
		~HumanB();
	/*Human-B functions*/
		void	attack(void);
		void	setWeapon(Weapon &argWeapon);
};

#endif