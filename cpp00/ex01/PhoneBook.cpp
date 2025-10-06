/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:59:17 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/09/30 15:41:59 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) : contactCount(0) {
	std::cout << "PhoneBook Constructor called!" << std::endl;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook Destructor called!" << std::endl;
}

// Simple helpers with internal linkage (no namespace per subject rules)
static std::string trim(const std::string &s)
{
	const std::string ws = " \t\n\r\f\v";
	std::string::size_type start = s.find_first_not_of(ws);
	if (start == std::string::npos)
		return std::string();
	std::string::size_type end = s.find_last_not_of(ws);
	return s.substr(start, end - start + 1);
}

// Prompt until a non-empty (after trim) line is given; returns false on EOF
static bool promptNonEmpty(const std::string &label, std::string &out)
{
	std::string line;
	while (true)
	{
		std::cout << label;
		if (!std::getline(std::cin, line))
		{
			std::cout << "\nInput aborted." << std::endl;
			return false;
		}
		line = trim(line);
		if (!line.empty())
		{
			out = line;
			return true;
		}
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
}

void PhoneBook::addContact()
{
	std::string fn, ln, nn, pn, ds;

	// Enforce non-empty fields (subject requirement). Abort ADD on EOF.
	if (!promptNonEmpty("First Name: ", fn))
		return;
	if (!promptNonEmpty("Last Name: ", ln))
		return;
	if (!promptNonEmpty("Nickname: ", nn))
		return;
	if (!promptNonEmpty("Phone Number: ", pn))
		return;
	if (!promptNonEmpty("Darkest Secret: ", ds))
		return;

	contacts[contactCount % 8].setContact(fn, ln, nn, pn, ds);
	contactCount++;
	std::cout << "Contact added!" << std::endl;
}

void PhoneBook::searchContact() const
{
	if (contactCount == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	int limit = (contactCount < 8) ? contactCount : 8;
	for (int i = 0; i < limit; i++)
	{
		contacts[i].displaySummary(i);
	}

	std::cout << "Enter index: ";
	int index;
	if (!(std::cin >> index) || index < 0 || index >= limit)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index!" << std::endl;
	}
	else
	{
		std::cin.ignore();
		contacts[index].displayContact();
	}
}
