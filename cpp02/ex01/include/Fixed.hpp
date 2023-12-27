/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:16:43 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/10 00:05:17 by envyilma         ###   ########.fr       */
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
	//operatör overloading
		Fixed& 	operator=(const Fixed& copy);
	//getter
		int		getRawBits(void) const;
	//setter
		void	setRawBits(int const raw);
	//convert to int&float
		float 	toFloat(void) const;
		int 	toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, const Fixed& fixed);

#endif