/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:56:16 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/15 17:04:42 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

int main(void){
	std::string brain = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	// Print the memory address of the string variable
	// Print the memory address held by stringPTR
	// Print the memory address held by stringREF

	// Print the value of the string variable
	// Print the value pointed to by stringPTR
	// Print the value pointed to by stringREF
	return (0);
}