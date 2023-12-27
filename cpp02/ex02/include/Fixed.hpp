/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:16:43 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/10 05:04:31 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HP
# define FIXED_HP

# include <iostream>

class Fixed{
	private:
	/*variables*/
		int rawBits;
		static const int bits = 8;
	public:
	/*constructor and destructor*/
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int arg);
		Fixed(const float arg);
		~Fixed();
	//operator overloading
		Fixed& 	operator=(const Fixed& copy);
		//compare operator >, <, >=, <=, ==, !=
		bool	operator>(const Fixed& fixed) const;
		bool	operator<(const Fixed& fixed) const;
		bool	operator>=(const Fixed& fixed) const;
		bool	operator<=(const Fixed& fixed) const;
		bool	operator==(const Fixed& fixed) const;
		bool	operator!=(const Fixed& fixed) const;
		//arithmetic operator +, -, *, /
		Fixed	operator+(const Fixed& fixed);
		Fixed	operator-(const Fixed& fixed);
		Fixed	operator*(const Fixed& fixed);
		Fixed	operator/(const Fixed& fixed);
		//F++, F--, ++F, --F
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);	
	//getter
		int		getRawBits(void) const;
	//setter
		void	setRawBits(int const raw);
	//convert to int&float
		float 	toFloat(void) const;
		int 	toInt(void) const;
	//min & max
	static Fixed	&min(Fixed& a, Fixed& b);
	static Fixed	&max(Fixed& a, Fixed& b);
	const static Fixed	&min(const Fixed& a, const Fixed& b);
	const static Fixed	&max(const Fixed& a, const Fixed& b);
};

std::ostream	&operator<<(std::ostream &o, const Fixed& fixed);

#endif