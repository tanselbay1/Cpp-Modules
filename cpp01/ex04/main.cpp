/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:55:43 by tanselbayra       #+#    #+#             */
/*   Updated: 2025/10/20 16:00:33 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replaceLine(std::string line, const std::string& s1, const std::string& s2) {
    // We can't do anything if s1 is empty, as find() would
    // find it everywhere and cause an infinite loop.
    if (s1.empty()) {
        return line;
    }

    size_t pos = line.find(s1); // Find the first occurrence
    while (pos != std::string::npos) {
        // Found s1 and now replace it
        line.erase(pos, s1.length());
        line.insert(pos, s2);

        // Find the next occurrence, starting *after* the text we just inserted
        pos = line.find(s1, pos + s2.length());
    }
    return line;
}

int main(int argc, char **argv) {
	// 1. Check the correct number of arguments
	if (argc != 4) {
		std::cerr << "Error: Invalid arguments." << std::endl;
		std::cerr << "Usage ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	// 2. Store arguments in strings(Lexer)
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	// 3. Open the input file
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "Error: Couldn't open input file" << std::endl;
		return (1);
	}
	
	// 4. Create the output file
	std::string outfileName = filename + ".replace";
	std::ofstream outputFile(outfileName.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Error: Couldn't create output file: " << outfileName << std::endl;
		inputFile.close();
		return (1);
	}

	// 6. Read, replace and write loop
	std::string line;
	int i = 0;
	while (std::getline(inputFile, line)) {
		std::string modifiedLine = replaceLine(line, s1, s2);
		outputFile << modifiedLine;
		std::cout << "I: " << ++i << std::endl;
		// Add the newline back, unless it's the last line and it was empty
		// (getline strips the newline)
		if (!inputFile.eof())
			outputFile << std::endl;
	}
	
	// 5. Close files
	inputFile.close();
	outputFile.close();

	std::cout << "Succesfully replaced content in " << outfileName << std::endl;
	return (0);
}