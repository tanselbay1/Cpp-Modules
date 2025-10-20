/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:55:43 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/20 14:03:14 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string replaceLine(std::string line, const std::string& s1, const std::string& s2) {
    // We can't do anything if s1 is empty, as find() would
    // find it everywhere and cause an infinite loop.
    if (s1.empty()) {
        return line;
    }

    size_t pos = line.find(s1); // Find the first occurrence
    while (pos != std::string::npos) {
        // We found s1, now replace it
        line.erase(pos, s1.length());
        line.insert(pos, s2);

        // Find the next occurrence, starting *after* the text we just inserted
        pos = line.find(s1, pos + s2.length());
    }
    return line;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error: Invalid arguments." << std::endl;
		std::cerr << "Usage ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	**argv = '\0';
}