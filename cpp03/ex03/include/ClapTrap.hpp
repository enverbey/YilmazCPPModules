/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:06:07 by enveryilmaz       #+#    #+#             */
/*   Updated: 2023/12/25 20:08:44 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap{
protected:
	std::string		name;
	int				hitPoints;		//represent the health of the ClapTrap
	int				energyPoints;
	int				attackDamage;
public:
	//Constructors and destructor
	ClapTrap();
	ClapTrap(std::string arg);
	ClapTrap(const ClapTrap& copy);
	ClapTrap &operator=(const ClapTrap& copy);
	~ClapTrap();
	
	//member functions
	void		attack(const std::string& target);
	void		takeDamage(unsigned int arg);
	void		beRepaired(unsigned int arg);
	
	//setters
	void		setName(std::string arg);
	void		setHitPoints(int arg);
	void		setEnergyPoints(int arg);
	void		setAttackDamage(int arg);
	
	//getters
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;

};

#endif