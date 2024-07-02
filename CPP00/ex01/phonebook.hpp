/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:37:26 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/02 18:47:36 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>

class phonebook {
    
private:

    contact		contacts[8];
    int         readinput(void) const;

public:

    phonebook(void);
    ~phonebook(void);

    void    addcontact(void);
    void    printcontact(void) const;
    void    search(void) const;
    void    welcome(void) const;

};

#endif