/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:44:35 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/26 15:35:00 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	class Fixed myClass;
	Fixed &myClass_2nd = myClass;
	myClass.bar(42);
	myClass.bar('h');
	myClass.bar(3.14f);
	myClass.bar(myClass);
	
}