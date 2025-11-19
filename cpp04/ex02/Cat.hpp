/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:57:32 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 15:20:55 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
	Brain	*_brain;	
	
public:
	Cat(void);
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	virtual ~Cat(void);
	
	virtual void makeSound(void) const;
};

#endif