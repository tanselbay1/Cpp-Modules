/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:07:20 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/20 11:03:25 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain {

private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &src);
    Brain &operator=(const Brain &rhs);
    ~Brain();
    
};

#endif