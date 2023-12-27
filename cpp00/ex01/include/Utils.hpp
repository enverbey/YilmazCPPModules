/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:38:06 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 10:38:06 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Utils{
	public:
	/*take input functions*/
		Utils(void);
		~Utils(void);
		std::string	input_name(void);
		std::string	input_lname(void);
		std::string	input_pname(void);
		std::string	input_phone(void);
		std::string	input_dsecret(void);
		int	input_index(void);
};