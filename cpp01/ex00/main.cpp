/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:12:09 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/14 13:43:41 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// #include "newZombie.cpp"
#include <string>
#include <iostream>

int main() {
	Zombie joe("Joe");
	joe.announce();
	
	Zombie* jim = newZombie("Jim");
	jim->announce();
	
	randomChump("Polina");
	delete jim;
	
	return (0);
}