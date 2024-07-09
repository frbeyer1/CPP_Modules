/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:40:17 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 13:30:44 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class   HumanA{

private:

    std::string _name;
    Weapon      &_weapon;

public:
    HumanA(std::string &name, Weapon &weapon);
    void    attack() const;
};

#endif