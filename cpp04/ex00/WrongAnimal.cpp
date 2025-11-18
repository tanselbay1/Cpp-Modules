/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:24:58 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/18 21:25:01 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
    std::cout << "WrongAnimal is born!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs) {
    std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal died!" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal sound!" << std::endl;
}