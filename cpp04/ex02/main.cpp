/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:33:53 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/11/19 17:12:10 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal test;             // <--- ERROR: Cannot instantiate abstract class
    // AAnimal* p = new AAnimal(); // <--- ERROR: Cannot instantiate abstract class

    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
    
    return 0;
}