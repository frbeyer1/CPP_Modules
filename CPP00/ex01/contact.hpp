/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:38:28 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/02 17:37:31 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class contact {

private:

    std::string name;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenumber;
    std::string darkest_secret;

public:

    contact(void);
    ~contact(void);
    
    void    init(void);

};

#endif