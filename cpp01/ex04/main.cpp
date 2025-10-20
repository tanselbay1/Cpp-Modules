/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:55:43 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/20 13:07:41 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error: Invalid arguments." << std::endl;
		std::cerr << "Usage ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	**argv = '\0';
}