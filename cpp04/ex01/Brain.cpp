/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbay1 <tanselbay1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:18:39 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/20 11:12:08 by tanselbay1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "🧠 Brain default constructor called." << std::endl;
	
    for (int i = 0; i < 100; ++i) {
        std::stringstream ss;
        // 2. Feed the integer 'i' into the stream
        ss << i;
        this->ideas[i] = "Idea " + ss.str();
    }
}

// DEEP COPY
Brain::Brain(const Brain &src) {
    std::cout << "🧠 Brain copy constructor called (Deep Copy)." << std::endl;
    // 1. Copy the members (the array contents)
    for (int i = 0; i < 100; ++i) {
        this->ideas[i] = src.ideas[i];
    }
}

Brain& Brain::operator=(const Brain &rhs) {
    std::cout << "🧠 Brain copy assignment operator called (Deep Copy)." << std::endl;
    if (this != &rhs) {
        // 1. Deep copy the ideas array contents
        for (int i = 0; i < 100; ++i) {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(void) {
    std::cout << "🧠 Brain destructor called." << std::endl;
    // Nothing to manually delete here since the array is part of the object
}