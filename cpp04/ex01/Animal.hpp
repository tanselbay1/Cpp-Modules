/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:15:34 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 15:18:46 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {

protected:
	std::string	type;
	
public:
	Animal(void);
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal(void);

	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif