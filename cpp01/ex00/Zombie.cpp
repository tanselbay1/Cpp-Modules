/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:12:18 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/09 14:12:19 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

std::string Zombie::getName(void) const {
	return this->_name;
}

void Zombie::setName(std::string newName){
	this->_name = newName;
	return;
}