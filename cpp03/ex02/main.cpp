/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:39:04 by tanselbay1        #+#    #+#             */
/*   Updated: 2025/11/13 11:40:03 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    std::cout << "--- Creating ClapTrap ---" << std::endl;
    ClapTrap clapA("CLAP-01");
    clapA.attack("skag");
    std::cout << std::endl;

    std::cout << "--- Creating ScavTrap ---" << std::endl;
    ScavTrap scavA("SCAV-01");
    scavA.attack("raider");
    scavA.guardGate();
    std::cout << std::endl;

    std::cout << "--- Creating FragTrap ---" << std::endl;
    FragTrap fragA("FRAG-01");
    fragA.attack("bandit");
    fragA.highFivesGuys();
    std::cout << std::endl;

    std::cout << "--- Testing Damage ---" << std::endl;
    fragA.takeDamage(50);
    fragA.beRepaired(10);
    std::cout << std::endl;

    std::cout << "--- End of main (Destructors will be called) ---" << std::endl;
    return 0;
}