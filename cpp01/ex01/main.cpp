/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:22:40 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/15 16:39:35 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	int N = 5;
	std::string name = "HordeMember";

	Zombie* myHorde = zombieHorde(N, name);

	for (int i = 0; i < N; i++){
		myHorde[i].announce();
	}

	delete[] myHorde;

	return (0);
}