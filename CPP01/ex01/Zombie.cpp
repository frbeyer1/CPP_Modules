/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:19:48 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 17:15:41 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : _name(name){}

Zombie::Zombie(){}

void    Zombie::setName(std::string &name){
    name = name;
}

void    Zombie::announce(void) const{
    std::cout << _name << "BraiiiiiiinnnzzzZ..." << std::endl;
}