/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:12:57 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/15 12:13:04 by tanselbayra      ###   ########.fr       */
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

#endif