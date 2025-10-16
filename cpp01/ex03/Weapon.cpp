/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:28:25 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/16 14:00:52 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon constructed!" << std::endl;
	return;
}

Weapon::~Weapon(void) {
	std::cout << this->_type << " type weapon destroyed!" << std::endl;
	return;
}

const std::string& Weapon::getType(void) const{
	return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}