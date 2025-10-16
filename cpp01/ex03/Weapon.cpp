/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:28:25 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/16 12:37:28 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void) {
	std::cout << "Weapon constructed!" << std::endl;
	return;
}

Weapon::~Weapon(void) {
	std::cout << this->_type << " type weapon destroyed!" << std::endl;
	return;
}

std::string Weapon::getType(void) {
	std::string& weapon_type = this->_type;
	return weapon_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}