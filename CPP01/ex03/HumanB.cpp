/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:42:00 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 15:02:39 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name){
}

void    HumanB::setWeapon(Weapon &weapon){
    _weapon = &weapon;
}

void    HumanB::attack() const{
    if (_weapon)
        std::cout << _name << " attacks with their weapon " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon " << std::endl;
}