/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:26:18 by tanselbay1        #+#    #+#             */
/*   Updated: 2025/11/10 15:59:31 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int 				_fixedPointValue;
	static const int 	_fractionalBits;

public:
	Fixed(void);
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& src);
	~Fixed(void);

	// Constructors with values
	Fixed(const int intValue);
	Fixed(const float floatValue);

	// Member functions
	float	toFloat(void) const;
	int		toInt(void) const;

	// Getter - setter
	int getRawBits(void) const;
	void setRawBits(int const raw);

    
    // -------- EX02 -----------
    
    // 1. Comparison Operators
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;

    // 2. Arithmetic Operators
    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;

    // 3. Increment/Decrement Operators
    Fixed& operator++(void);     // Prefix ++a
    Fixed  operator++(int);      // Postfix a++
    Fixed& operator--(void);     // Prefix --a
    Fixed  operator--(int);      // Postfix a--

};

// Printing Operator Overload - something like (a.print("hello"))
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif