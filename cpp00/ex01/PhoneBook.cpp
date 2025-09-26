/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:59:17 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/08/24 13:14:34 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() {
    std::string fn, ln, nn, pn, ds;

    std::cout << "First Name: ";
    std::getline(std::cin, fn);
    std::cout << "Last Name: ";
    std::getline(std::cin, ln);
    std::cout << "Nickname: ";
    std::getline(std::cin, nn);
    std::cout << "Phone Number: ";
    std::getline(std::cin, pn);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, ds);

    contacts[contactCount % 8].setContact(fn, ln, nn, pn, ds);
    contactCount++;
    std::cout << "Contact added!" << std::endl;
}

void PhoneBook::searchContact() const {
    if (contactCount == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    int limit = (contactCount < 8) ? contactCount : 8;
    for (int i = 0; i < limit; i++) {
        contacts[i].displaySummary(i);
    }

    std::cout << "Enter index: ";
    int index;
    if (!(std::cin >> index) || index < 0 || index >= limit) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Invalid index!" << std::endl;
    } else {
        std::cin.ignore();
        contacts[index].displayContact();
    }
}
