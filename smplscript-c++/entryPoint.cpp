#include "entryPoint.h"
#include "lexer.h"
#include <string>

// run function
// creates a Lexer object, generates tokens from input text, returns the result
Lexer::valueReturn run(std::string fileName, std::string text) {
	Lexer lexer = Lexer(fileName, text);

	Lexer::valueReturn lexerResult =  lexer.generateTokens();

	return lexerResult;
}