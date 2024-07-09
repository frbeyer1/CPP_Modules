/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbeyer <frbeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:19:34 by frbeyer           #+#    #+#             */
/*   Updated: 2024/07/05 17:45:23 by frbeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    stringPTR(std::string *str){
    std::cout << *str << std::endl;
}
void    stringREF(std::string &str){
    std::cout << str << std::endl;
}

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory:" << std::endl;
    std::cout << "str " << &str << std::endl;
    std::cout << "ptr " << stringPTR << std::endl;
    std::cout << "ref " << &stringREF << std::endl;

    std::cout << "value:" << std::endl;
    std::cout << "str " << str << std::endl;
    std::cout << "ptr " << *stringPTR << std::endl;
    std::cout << "ref " << stringREF << std::endl;
}