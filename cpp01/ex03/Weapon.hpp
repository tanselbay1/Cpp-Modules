/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:19:44 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/16 14:01:26 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

private:
	std::string 	_type;

public:
	Weapon(std::string type);
	~Weapon(void);

	const std::string& getType(void) const;
	void	setType(std::string type);
};

#endif