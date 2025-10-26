/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:27:28 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/26 14:43:00 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void Fixed::bar(int const i) const {
	std::cout << "Member function bar with " << i << " runs!" << std::endl;
	return;
}

void Fixed::bar(char const c) const {
	std::cout << "Member function bar with " << c << " runs!" << std::endl;
	return;
}

void Fixed::bar(float const f) const {
	std::cout << "Member function bar with " << f << " runs!" << std::endl;
	return;
}

void Fixed::bar(Fixed const & s) const {
	(void)s;
	std::cout << "Member function bar with class runs!" << std::endl;
	return;
}