/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:50:19 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 16:26:22 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ){

    Zombie *newZombies;

    if (N <= 0)
        return(NULL);
    newZombies = ::new Zombie[N];
    for (int i; i = 0; i<N)
    {
        newZombies[i].setName(name);
    }
    return (newZombies);
}