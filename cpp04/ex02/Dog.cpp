/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:17:20 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 15:22:08 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
    this->type = "Dog";
	this->_brain = new Brain();
    std::cout << "Dog is born with a brain!" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
    this->type = src.type;
	this->_brain = new Brain(*src._brain);
    std::cout << "Dog copy constructor called(Deep Copy)!" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs) {
    std::cout << "Dog copy assignment operator called!" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs); // Call the base class assignment
		delete this->_brain; // Delete current brain to prevent memory leak
		this->_brain = new Brain(*rhs._brain);
        this->type = rhs.type;
    }
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog rest in piece!" << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const {
    std::cout << "Woof woof!" << std::endl;
}