/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:12:09 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/09 14:12:10 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int main() {
	Zombie joe;

	joe.setName("Joe");
	std::cout << "Zombie name: " << joe.getName() << std::endl;
	joe.announce();
	joe.setName("Philip");
	std::cout << "New zombie name: " << joe.getName() << std::endl;
	joe.announce();
	return (0);
}