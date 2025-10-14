/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:23:28 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/14 12:45:19 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:	
	Zombie(std::string zombie_name);
	~Zombie(void);
	
	void 		announce(void);
	
	private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif