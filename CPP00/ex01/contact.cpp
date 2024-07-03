/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:38:25 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/02 15:36:25 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void){
}

contact::~contact(void){
}

std::string    contact::get_input(std::string str) const{
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid\n"; 
        }

    } while (!valid);
    return(input);
}

void    contact::set_index(int i){
    this->index = i;
}

void    contact::init(void){
    std::cin.ignore();
    this->first_name = this->get_input("Enter First Name: ");
    this->last_name = this->get_input("Enter Last Name: ");
    this->nickname = this->get_input("Enter Nickname: ");
    this->phonenumber = this->get_input("Enter Phonenumber: ");
    this->darkest_secret = this->get_input("Darkest Secret: ");
    std::cout << std::endl;
}

std::string contact::print_contact_sum(std::string str) const{
    if(str.length() > 10)
        str.substr(0, 9) + ".";
    return (str);
}
void    contact::view_in_column(int index) const{
    if(this->first_name.empty() || this->last_name.empty() || this->nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->print_contact_sum(this->first_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->print_contact_sum(this->last_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->print_contact_sum(this->nickname) << std::flush;
    std::cout << std::endl;
}
