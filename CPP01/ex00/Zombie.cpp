/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:19:48 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 15:30:52 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : _name(name){}

void    Zombie::announce(void) const{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}