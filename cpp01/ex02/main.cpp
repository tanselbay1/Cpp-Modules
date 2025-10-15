/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:56:16 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/15 17:16:37 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
	std::string brain = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	// Print the memory address of the string variable
	std::cout << "Memory address of the string: " << &brain << std::endl;
	// Print the memory address held by stringPTR
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	// Print the memory address held by stringREF
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	
	std::cout << "--------------------------------------------------" << std::endl;
	
	// Print the value of the string variable
	std::cout << "Value of the string variable: " << brain << std::endl;
	// Print the value pointed to by stringPTR
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	// Print the value pointed to by stringREF
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}