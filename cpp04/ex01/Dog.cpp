/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:17:20 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/18 21:18:18 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
    this->type = "Dog";
    std::cout << "Dog is born!" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
    this->type = src.type;
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs) {
    std::cout << "Dog copy assignment operator called!" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs); // Call the base class assignment
        this->type = rhs.type;
    }
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog rest in piece!" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "Woof woof!" << std::endl;
}