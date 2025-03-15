#include <iostream>
#include "entryPoint.h"
#include "lexer.h"

/*
Bare main function, will be used as the entry point.
*/

int main() {

	std::cout << "smplscript > ";
	std::string text;
	std::getline(std::cin, text);

	Lexer::valueReturn result = run(text);

	if (result.hasError){
		std::cout << result.error.toString() << std::endl;
	}
	else {
		std::cout << "[";
		for (int i = 0; i < result.tokens.size(); i++) {
			std::cout << result.tokens[i].toString();
			if (i != result.tokens.size() - 1)
				std::cout << ", ";
		}
		std::cout << "]" << std::endl;
	}

	return 0;
}