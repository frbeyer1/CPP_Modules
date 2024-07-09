/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:29:59 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 15:02:55 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type){
}

void    Weapon::setType(const std::string &type){
    _type = type;
}

std::string Weapon::getType(void) const{
    return (_type);
}
