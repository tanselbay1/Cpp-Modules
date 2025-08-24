/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:16:47 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/08/24 11:51:32 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip> // for setw

void Contact::setContact(std::string fn, std::string ln, std::string nn,
						 std::string pn, std::string ds)
{
	firstName = fn;
	lastName = ln;
	nickname = nn;
	phoneNumber = pn;
	darkestSecret = ds;
}

void Contact::displayContact() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::displaySummary(int index) const
{
	auto format = [](std::string str)
	{
		if (str.length() > 10)
			return str.substr(0, 9) + ".";
		return str;
	};
	std::cout << std::setw(10) << index << "|"
			  << std::setw(10) << format(firstName) << "|"
			  << std::setw(10) << format(lastName) << "|"
			  << std::setw(10) << format(nickname) << std::endl;
}
