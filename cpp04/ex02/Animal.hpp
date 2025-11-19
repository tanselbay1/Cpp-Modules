/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:15:34 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 17:06:35 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal {

protected:
	std::string	type;
	
public:
	AAnimal(void);
	AAnimal(const AAnimal &src);
	AAnimal &operator=(const AAnimal &rhs);
	virtual ~AAnimal(void);

	std::string getType(void) const;

	// Now this is a Pure Virtual Function
	// and AAnimal is Abstract. Cannot initialize like 'new AAnimal()'
	virtual void makeSound(void) const = 0;
};

#endif