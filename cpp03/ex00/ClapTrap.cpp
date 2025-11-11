/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:41:06 by tanselbay1        #+#    #+#             */
/*   Updated: 2025/11/11 16:10:34 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default Name"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default Constructor called for " << this->_name << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Name Constructor called for " << this->_name << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "Copy constructor called!" << std::endl;
    *this = src;
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    std::cout << "Copy assignment operator called!" << std::endl;
    
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called for " << this->_name << std::endl;
    return;
}


// Member Function Attack
void ClapTrap::attack(const std::string& target) {
    if (this->_hitPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " is already defeated and cannot attack!" << std::endl;
        return;
    }
    if (this->_energyPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    
    this->_energyPoints--;
    
    std::cout << "ClapTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}


// Member Function TakeDamage
void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " is already defeated!" << std::endl;
        return;
    }
    
    // Check if attack is bigger than hitpoints
    if (this->_hitPoints < amount)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;

    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!"
              << " (Remaining HP: " << this->_hitPoints << ")" << std::endl;
}


// Member Function BeRepaired
void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " is defeated and cannot repair itself!" << std::endl;
        return;
    }
    if (this->_energyPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }

    this->_energyPoints--;
    this->_hitPoints += amount;

    std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " points!"
              << " (New HP: " << this->_hitPoints << ")" << std::endl;
}