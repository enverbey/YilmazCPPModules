/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:16:40 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/10 05:05:45 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/*
(7):  	00000000000011100000000
(7.5):  00000000000011110000000
(7.25): 00000000000011101000000
(2.5):	00000000000001010000000
		00000000000001000000000
*/

//Constructor
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int arg)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = (arg * (1 << bits));
}

Fixed::Fixed(const float arg)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf((arg * (1 << bits)));
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
	//->compare operator >, <, >=, <=, ==, !=
bool	Fixed::operator>(Fixed const& fixed) const
{
	return (rawBits > fixed.getRawBits());
}
bool	Fixed::operator<(Fixed const& fixed) const
{
	return (rawBits < fixed.getRawBits());
}
bool	Fixed::operator>=(Fixed const& fixed) const
{
	return (rawBits >= fixed.getRawBits());
}
bool	Fixed::operator<=(Fixed const& fixed) const
{
	return (rawBits <= fixed.getRawBits());
}
bool	Fixed::operator==(Fixed const& fixed) const
{
	return (rawBits == fixed.getRawBits());
}
bool	Fixed::operator!=(Fixed const& fixed) const
{
	return (rawBits != fixed.getRawBits());
}
	//->arithmetic operator +, -, *, /
Fixed	Fixed::operator+(Fixed const& fixed)
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}
Fixed	Fixed::operator-(Fixed const& fixed)
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}
Fixed	Fixed::operator*(Fixed const& fixed)
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}
Fixed	Fixed::operator/(Fixed const& fixed)
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}
	// F++, F--, ++F, --F
Fixed&	Fixed::operator++()
{
	this->rawBits++;
	return (*this);
}
Fixed&	Fixed::operator--()
{
	this->rawBits--;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed original(*this);
	++this->rawBits;
	return (original);
}
Fixed	Fixed::operator--(int)
{
	Fixed original(*this);
	--this->rawBits;
	return (original);
}

//getter
int	Fixed::getRawBits() const
{
	return (this->rawBits);
}
//setter
void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

//convert to float
float	Fixed::toFloat() const
{
	return ((float)rawBits / (float)(1 << bits));
}
//convert to float
int		Fixed::toInt() const
{
	return (rawBits / (1 << bits));
}

//min & max
Fixed	&Fixed::min(Fixed& a, Fixed& b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}
Fixed	&Fixed::max(Fixed& a, Fixed& b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed &Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed &Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

//cout
std::ostream &operator<<(std::ostream &o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}