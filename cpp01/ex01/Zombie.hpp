/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:12:57 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/15 15:50:55 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:	
	Zombie(std::string zombie_name);
	// Default constructor
	Zombie(void);
	~Zombie(void);
	
	void 	announce(void);
	void	setName(std::string name);
	
	private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif