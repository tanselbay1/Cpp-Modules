/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:59:37 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/12 20:06:03 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    // Set ScavTrap specific stats
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    
    std::cout << "ScavTrap: Default Constructor called for " << this->_name << std::endl;
}

// This is the most important part!
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    // Set ScavTrap specific stats
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "ScavTrap: Name Constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    std::cout << "ScavTrap: Copy constructor called!" << std::endl;
    // *this = src; // This is often done, but letting the base constructor handle
    //              // its part is also clean. *this = src; is fine too.
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    std::cout << "ScavTrap: Copy assignment operator called!" << std::endl;
    
    if (this != &rhs) {
        ClapTrap::operator=(rhs); // <-- Explicitly call base class's operator=
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap: Destructor called for " << this->_name << std::endl;
    // The ClapTrap destructor is called automatically right after this
}

// Overridden attack function
void ScavTrap::attack(const std::string& target) {
    // Check for HP and Energy
    if (this->_hitPoints == 0) {
        std::cout << "ScavTrap " << this->_name << " is already defeated!" << std::endl;
        return;
    }
    if (this->_energyPoints == 0) {
        std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }

    this->_energyPoints--; // Consume energy
    
    // New attack message!
    std::cout << "ScavTrap " << this->_name << " viciously attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
