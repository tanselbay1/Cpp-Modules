/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:33:53 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 15:28:25 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

#define N_ANIMALS 4

int main() {
    // ========================================================
    // TEST 1: Subject Requirement (Array of Animals)
    // ========================================================
    std::cout << "--- 1. Array of Animals Test ---" << std::endl;

    const Animal* animals[N_ANIMALS];

    std::cout << "[ Creating Animals... ]" << std::endl;
    for (int i = 0; i < N_ANIMALS; i++) {
        if (i < N_ANIMALS / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    std::cout << "\n[ Deleting Animals... ]" << std::endl;
    // This part tests if your destructors are virtual and if memory is freed
    for (int i = 0; i < N_ANIMALS; i++) {
        delete animals[i];
    }

    // ========================================================
    // TEST 2: Deep Copy Test (The Critical Part)
    // ========================================================
    std::cout << "\n--- 2. Deep Copy Test ---" << std::endl;
    
    std::cout << "Creating 'basic' Dog..." << std::endl;
    Dog basic;
    
    // Usually, you would access the brain here to set an idea, but Brain is private.
    // The test below is sufficient to check for double-free or shared pointers.

    {
        std::cout << "Creating 'tmp' Dog (copy of basic)..." << std::endl;
        Dog tmp = basic; // Calls Copy Constructor
        
        // If Deep Copy works: tmp has its OWN Brain.
        // If Shallow Copy (Wrong): tmp points to basic's Brain.
    } 
    // tmp goes out of scope here and calls destructor.
    // IF YOU DID SHALLOW COPY: tmp deletes the brain. 'basic' now has a dangling pointer.
    
    std::cout << "'tmp' is destroyed. If 'basic' is still alive and valid, Deep Copy worked!" << std::endl;
    
    // When 'basic' is destroyed at the end of main:
    // IF SHALLOW COPY: Double Free error (Crash).
    // IF DEEP COPY: Normal destruction.

    return 0;
}