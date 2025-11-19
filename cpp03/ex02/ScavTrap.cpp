/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:59:37 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/12 20:39:58 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Because ScavTrap is a derived class from ClapTrap. It calls ClapTrap constructor first
ScavTrap::ScavTrap(void) : ClapTrap() {
    // Set ScavTrap specific stats
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    
    std::cout << "ScavTrap: Default Constructor called for " << this->_name << std::endl;
}

// Because ScavTrap is a derived class from ClapTrap. It calls ClapTrap name constructor first
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

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap: Destructor called for " << this->_name << std::endl;
}

// Overridden attack function
void ScavTrap::attack(const std::string& target) {
    if (this->_hitPoints == 0) {
        std::cout << "ScavTrap " << this->_name << " is already defeated!" << std::endl;
        return;
    }
    if (this->_energyPoints == 0) {
        std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }

    this->_energyPoints--;
    
    // New attack message!
    std::cout << "ScavTrap " << this->_name << " viciously attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
