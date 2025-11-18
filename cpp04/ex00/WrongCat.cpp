/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:28:17 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/18 21:28:19 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
    this->type = "WrongCat";
    std::cout << "WrongCat is born!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
    this->type = src.type;
    std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs) {
    std::cout << "WrongCat copy assignment operator called!" << std::endl;
    if (this != &rhs) {
        WrongAnimal::operator=(rhs);
        this->type = rhs.type;
    }
    return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat died!" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "WrongCat Meow!" << std::endl;
}