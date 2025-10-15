/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:14:37 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/15 15:56:56 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

// Default constructor
Zombie::Zombie(void){
	std::cout << "A nameless zombie is born..." << std::endl;
	return;
}

Zombie::Zombie(std::string zombie_name) : _name(zombie_name){
	std::cout << this->_name << " is alive!" << std::endl;
	return;
}

Zombie::~Zombie(void){
	if (this->_name.empty())
		std::cout << "A nameless zombie is dead!" << std::endl;
	else
		std::cout << this->_name << " is dead!" << std::endl;
	return;
}

void Zombie::setName(std::string name){
	this->_name = name;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}