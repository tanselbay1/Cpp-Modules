/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:16:37 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 15:20:40 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:
	Brain *_brain;
	
public:
    Dog(void);
    Dog(const Dog &src);
    Dog &operator=(const Dog &rhs);
    virtual ~Dog(void);

    virtual void makeSound(void) const;
};

#endif