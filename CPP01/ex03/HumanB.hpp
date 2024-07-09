/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:40:22 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 13:27:40 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB__HPP
# define HUMANB__HPP

# include <iostream>
# include "Weapon.hpp"

class   HumanB{

private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanB(std::string &name);
    void    attack() const;
    void    set_weapon(Weapon &weapon);
};

#endif