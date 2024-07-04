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
# include <iomanip>

class contact {

private:

    std::string name;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenumber;
    std::string darkest_secret;
    int         index;

    std::string get_input(std::string str) const;
    std::string print_contact_sum(std::string str) const;

public:

    contact(void);
    ~contact(void);

    void    init(void);
    void    set_index(int i);
    void    view_in_column(int index) const;
    void    display_one_contact(int i) const;
};

#endif