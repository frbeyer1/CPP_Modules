/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:40:29 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 13:24:03 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class   Weapon{

private:
    std::string _type;

public:
    Weapon(std::string &type);
    std::string    get_type(void) const;
    void    set_type(const std::string &type);
};

#endif