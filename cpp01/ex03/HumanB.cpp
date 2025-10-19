/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:27:57 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/19 13:44:03 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cout << this->_name << " is born!" << std::endl;
	return;
}

HumanB::~HumanB(void) {
	std::cout << this->_name << " died!" << std::endl;
	return;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their bare hands!" << std::endl;
}