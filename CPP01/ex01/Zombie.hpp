/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:41:08 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 16:20:13 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class   Zombie{

private:
    
    std::string _name;

public:
    Zombie();
    Zombie(const std::string& name);
    void    setName(std::string &name);
    void    announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif