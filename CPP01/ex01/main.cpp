/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:41:44 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 16:42:19 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int N = 10;
    Zombie *Horde = zombieHorde(N, "Zombies");
    for (int i; i = 0; i < N)
    {
        Horde[i].announce();
        i++;
    }
    delete [] Horde;
}

// HEAP: when information is needed beyond called function (have remember to delete it after)
// STACK: deletes itself after function call