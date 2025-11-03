/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:57:49 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/03 17:57:50 by tanselbayra      ###   ########.fr       */
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
};

// Printing Operator Overload - something like (a.print("hello"))
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif