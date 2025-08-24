/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:16:47 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/08/24 13:10:30 by tanselbayra      ###   ########.fr       */
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
	std::string fn = firstName;
	std::string ln = lastName;
	std::string nn = nickname;

	if (fn.length() > 10)
		fn = fn.substr(0, 9) + ".";
	if (ln.length() > 10)
		ln = ln.substr(0, 9) + ".";
	if (nn.length() > 10)
		nn = nn.substr(0, 9) + ".";

	std::cout << std::setw(10) << index << "|"
			  << std::setw(10) << fn << "|"
			  << std::setw(10) << ln << "|"
			  << std::setw(10) << nn << std::endl;
}
