/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:37:21 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/02 18:23:33 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void){
}

phonebook::~phonebook(void){
}

// int	phonebook::readinput() const{

// 	std::cout << "Please enter "
// }

void	phonebook::welcome(void) const{
	std::cout << std::endl;
	std::cout << "Welcome to your awesome phonebook!\n";
	std::cout << "----------------------------------\n\n";
	std::cout << "What do you wanna do?\n\n";
	std::cout << "ADD - to add a contact\n";
	std::cout << "SEARCH - to search for a contact\n";
	std::cout << "EXIT - to exit the phonebook\n\n";
}

void	phonebook::addcontact(void){
	int	i = 0;
	std::cout << "first name:\n";

}

void	phonebook::search(void) const{
	std::cout << "search";
}