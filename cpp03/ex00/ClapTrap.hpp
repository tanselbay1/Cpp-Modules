/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:16:47 by tanselbay1        #+#    #+#             */
/*   Updated: 2025/11/11 12:41:58 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    
private:
    std::string     _name;
    int             _hitPoints;
    int             _energyPoints;
    int             _attackDamage;

public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& src);
    ClapTrap& operator=(const ClapTrap& rhs);
    ~ClapTrap(void);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRapaired(unsigned int amount);
};

#endif