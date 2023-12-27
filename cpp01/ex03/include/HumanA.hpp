/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:45:39 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 10:45:39 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP


# include "Weapon.hpp"

class HumanA{
	private:
	/*variables*/
		std::string _name;
		Weapon	&weapon;
	public:
	/*constructor and destructor*/
		HumanA(std::string argName, Weapon &argWeapon);
		~HumanA();
	/*Human-A function*/
		void	attack();
};

#endif