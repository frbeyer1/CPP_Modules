/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:41:08 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 15:28:30 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class   Zombie{

private:
    
    std::string _name;

public:
    
    Zombie(const std::string& name);
    void    announce(void) const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
    
#endif