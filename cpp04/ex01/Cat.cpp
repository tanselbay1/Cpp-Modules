/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:03:45 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 15:21:45 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << this->type << " is born with a brain!" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src){
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	std::cout << this->type << " copy constructor called(Deep Copy)!" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs) {
	std::cout << rhs.type << " copy assignment operator called(Deep Copy)!" << std::endl;
	
	if (this != &rhs) {
		Animal::operator=(rhs); // Call Base assignment to handle base parts
		delete this->_brain; // Blow up existing brain 💨🧠 to prevent memory leak
		this->_brain = new Brain(*rhs._brain);
		this->type = rhs.type;
	}
	return *this;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << this->type << " died!" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Meoww" << std::endl;
}