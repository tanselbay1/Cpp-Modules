/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:03:45 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/18 20:46:39 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	this->type = "Cat";
	std::cout << this->type << " is born!" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src){
	this->type = src.type;
	std::cout << this->type << " copy constructor called!" << std::endl;
	// *this = src is not necessary because of Animal(src)
}

Cat& Cat::operator=(const Cat &rhs) {
	std::cout << rhs.type << " copy assignment operator called!" << std::endl;
	
	if (this != &rhs) {
		Animal::operator=(rhs); // Call Base assignment to handle base parts
		this->type = rhs.type;
	}
	return *this;
}

Cat::~Cat(void) {
	std::cout << this->type << " died!" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Meoww" << std::endl;
}