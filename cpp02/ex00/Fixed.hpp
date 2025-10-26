/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:22:48 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/26 15:29:55 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	
public:
	Fixed(void);
	~Fixed(void);

	void bar(int const i) const;
	void bar(char const c) const;
	void bar(float const f) const;
	void bar(Fixed const & s) const;
};

#endif