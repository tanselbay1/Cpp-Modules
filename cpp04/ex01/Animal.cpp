/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:24:33 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 15:22:54 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal") {
	std::cout << "Animal is born!" << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << "Animal copy constructor called!" << std::endl;
	this->type = src.type;
}

Animal& Animal::operator=(const Animal &rhs) {
	std::cout << "Animal copy assignment operator called!" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << type << "Animal died!" << std::endl;
}

std::string Animal::getType(void) const{
	return (this->type);
}

void Animal::makeSound(void) const{
	std::cout << "Make animal sound!" << std::endl;
}
