/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:38:03 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/04 10:52:47 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Colors.h"
#include <iostream>

void	put_message_color(std::string color, std::string str)
{
	std::cout << color << str << END_COLOR;
}