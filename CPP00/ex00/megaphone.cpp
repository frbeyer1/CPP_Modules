/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:36:26 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/02 14:36:28 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; av[i]; i++)
		{
			for(int j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
		}
	}
	std::cout << std::endl;
	return(EXIT_SUCCESS);
}