/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:26:32 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:26:32 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
	/*variables*/
		std::string _name;
	public:
	/*constructor and destructor*/
		Zombie();
		~Zombie();
	/*setters*/
		void	setName(std::string arg);

	//Zombie Class Function
		void	announce(void);
};

#endif