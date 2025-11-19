/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:24:33 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 17:07:45 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void): type("AAnimal") {
	std::cout << "AAnimal is born!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << "AAnimal copy constructor called!" << std::endl;
	this->type = src.type;
}

AAnimal& AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "AAnimal copy assignment operator called!" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal died!" << std::endl;
}

std::string AAnimal::getType(void) const{
	return (this->type);
}

