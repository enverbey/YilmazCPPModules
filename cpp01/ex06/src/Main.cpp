/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:32:10 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:43:48 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "This program accept only 2 arguments!" << std::endl, -1);
    Harl harl;
    harl.complain(av[1]);
}