/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:39:35 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 15:02:23 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon) {
}

void    HumanA::attack() const{
    std::cout << _name << " attcks with their " << _weapon.getType() << std::endl;
}