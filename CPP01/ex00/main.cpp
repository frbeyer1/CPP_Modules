/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:41:44 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 15:49:00 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *loadonheap = newZombie("im on heap");
    loadonheap->announce();
    delete loadonheap;
    randomChump("im on stack");
}

// HEAP: when information is needed beyond called function (have remember to delete it after)
// STACK: deletes itself after function call