/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:19:27 by tanselbay1        #+#    #+#             */
/*   Updated: 2025/11/13 11:34:45 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() { // <-- Calls ClapTrap's default constructor
    // Set FragTrap specific stats
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    
    std::cout << "FragTrap: Default Constructor called for " << this->_name << std::endl;
}

// Name Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) { // <-- Calls ClapTrap's name constructor
    // Set FragTrap specific stats
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "FragTrap: Name Constructor called for " << this->_name << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) { // <-- Calls ClapTrap's copy constructor
    std::cout << "FragTrap: Copy constructor called!" << std::endl;
}

// Copy Assignment Operator
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    std::cout << "FragTrap: Copy assignment operator called!" << std::endl;
    
    if (this != &rhs) {
        ClapTrap::operator=(rhs); // <-- Explicitly call base class's operator=
    }
    return *this;
}

// Destructor
FragTrap::~FragTrap(void) {
    std::cout << "FragTrap: Destructor called for " << this->_name << std::endl;
}

// New ability
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}