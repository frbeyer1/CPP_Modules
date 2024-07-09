/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:40:29 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/09 14:57:49 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class   Weapon{

private:
    std::string _type;

public:
    Weapon(const std::string &type);
    std::string    getType(void) const;
    void           setType(const std::string &type);
};

#endif