/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:16:40 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/09 22:43:36 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

//Constructor
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;	
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//Operator overloading
Fixed&	Fixed::operator=(Fixed const& copy)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &copy)
		this->rawBits = copy.getRawBits();
	return (*this);
}

//getter
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}
//setter
void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}