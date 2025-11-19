/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:33:53 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 11:46:17 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // ========================================================
    // 1. SUBJECT REQUIRED TEST (Polymorphism)
    // ========================================================
    std::cout << "--- 1. Subject Test (Correct Polymorphism) ---" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;

    // These should output the specific animal sound (Meow/Woof)
    // because makeSound() IS virtual in Animal class
	// and virtual makes member function dynamic.
    j->makeSound();
    i->makeSound(); 
    meta->makeSound();

    // ========================================================
    // 2. WRONG ANIMAL TEST (Static Binding)
    // ========================================================
    std::cout << std::endl << "--- 2. Wrong Animal Test (No Polymorphism) ---" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "WrongCat Type: " << wrongCat->getType() << std::endl;

    // This will output "WrongAnimal sound!" instead of "WrongCat Meow!"
    // because makeSound() is NOT virtual.
    wrongCat->makeSound(); 
    wrongMeta->makeSound();

    // ========================================================
    // 3. CLEANUP & DESTRUCTOR TEST
    // ========================================================
    std::cout << std::endl << "--- 3. Destructor Test ---" << std::endl;
    
    // Should call ~Cat() then ~Animal()
    delete i; 
    // Should call ~Dog() then ~Animal()
    delete j;
    // Should call ~Animal()
    delete meta;

    std::cout << std::endl << "--- Delete Wrong Animals ---" << std::endl;
    // WARNING: If ~WrongAnimal is not virtual, this might leak memory!
    // It will likely ONLY call ~WrongAnimal() and NOT ~WrongCat()
    delete wrongCat;
    delete wrongMeta;

    return 0;
}