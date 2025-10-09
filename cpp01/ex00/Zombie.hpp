/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:23:28 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/09 13:59:02 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:	
	Zombie(void);
	~Zombie(void);
	
	void 		announce(void);
	std::string getName(void) const;
	void 		setName(std::string newName);
	
private:
	std::string _name;
};

#endif