/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:36:20 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/20 16:59:06 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void) {
	std::cout << "Harl born." << std::endl;
	return;
}

Harl::~Harl(void) {
	std::cout << "Harl complained a lot and died!" << std::endl;
	return;
}

void Harl::debug(void) {
	std::cout << "Harl complained DEBUG level!" << std::endl;
}

void Harl::info(void) {
	std::cout << "Harl complained INFO level!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "Harl complained WARNING level!" << std::endl;
}

void Harl::error(void) {
	std::cout << "Harl complained a lot ERROR level!" << std::endl;
}

void Harl::complain(std::string level) {

    // 1. Create a "key" array of the strings to match
    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    // 2. Define the function pointer type to make it readable
    typedef void (Harl::*HarlMemFn)(void);

    // 3. Create a "value" array of the matching function pointers
    HarlMemFn functions[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // 4. Loop to find the matching string
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            // 5. If found, use the same index to call the correct function
            (this->*functions[i])();
            return; // Exit after complaining
        }
    }

    // Handle unknown levels
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}