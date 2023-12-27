/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:26:39 by envyilma          #+#    #+#             */
/*   Updated: 2023/12/06 13:29:08 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include "../include/Zombie.h"

int main()
{
	int N;
    
    N = 5;
    Zombie *zomb = zombieHorde(N, "Foo");
    for (int i = 0; i < N; i++) {
        zomb[i].announce();
    }
    delete[] zomb;
}