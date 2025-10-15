/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:14:37 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/15 12:21:43 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name) : _name(zombie_name){
	std::cout << this->_name << " is alive!" << std::endl;
	return;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " is dead!" << std::endl;
	return;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}