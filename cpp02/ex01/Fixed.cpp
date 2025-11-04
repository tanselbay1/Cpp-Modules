/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:59:04 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/04 16:16:57 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

// Constructor that takes an integer
Fixed::Fixed(const int intValue) {
	std::cout << "Int constructor called" << std::endl;
	// Shift the integer left by 8 bits to make room for the fractional part
	this->_fixedPointValue = intValue << _fractionalBits;
}

// Constructor that takes a float
Fixed::Fixed(const float floatValue) {
	std::cout << "Float constructor called" << std::endl;
	// Multiply by 2^8 (256) and round to the nearest integer
	this->_fixedPointValue = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called!" << std::endl;
	*this = src;
	return;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

// Convert the fixed-point value to a float
float Fixed::toFloat(void) const {
	// Divide by 2^8 (256) to get the float value back
	return (float)this->_fixedPointValue / (float)(1 << _fractionalBits);
}

// Convert the fixed-point value to an integer
int Fixed::toInt(void) const {
	// Shift right by 8 bits to discard the fractional part
	return this->_fixedPointValue >> _fractionalBits;
}

// Operator overload
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	// Tell the stream to print the float representation of the Fixed object
	os << fixed.toFloat();
	return os;
}