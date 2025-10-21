/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:54:09 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/20 16:54:11 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;

    std::cout << "--- DEBUG ---" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "--- INFO ---" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "--- WARNING ---" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "--- ERROR ---" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;
    
    std::cout << "--- UNKNOWN ---" << std::endl;
    harl.complain("INVALID_LEVEL");
    std::cout << std::endl;

    return 0;
}