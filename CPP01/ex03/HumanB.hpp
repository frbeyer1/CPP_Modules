/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:40:22 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 14:58:30 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB__HPP
# define HUMANB__HPP

# include "Weapon.hpp"

class   HumanB{

private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanB(const std::string &name);
    void    attack() const;
    void    setWeapon(Weapon &weapon);
};

#endif