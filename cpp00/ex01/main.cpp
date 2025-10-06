/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:00:44 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/06 16:15:52 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook pb;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if(!std::getline(std::cin, command))break;

        if (command == "ADD")
            pb.addContact();
        else if (command == "SEARCH")
            pb.searchContact();
        else if (command == "EXIT")
            break;
    }
    return 0;
}
