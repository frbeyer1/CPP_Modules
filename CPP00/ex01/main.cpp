/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:46:15 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/02 18:54:55 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int ac, char **av)
{
	phonebook	phonebook;
	std::string	input = " ";
	
	phonebook.welcome();
	while(input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
			phonebook.addcontact();
		if (input.compare("SEARCH") == 0)
			phonebook.search();
		std::cout << "> " << std::flush;
		std::cin >> input;
	}
    return (EXIT_SUCCESS);
}