/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:22:48 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/31 15:18:45 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	
private:
	int 				_fixedPointValue;
	static const int 	_fractionalBits;
	
public:
	Fixed(void);
	Fixed(const Fixed& src);
	Fixed& operator=(const Fixed& rhs);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);

};

#endif