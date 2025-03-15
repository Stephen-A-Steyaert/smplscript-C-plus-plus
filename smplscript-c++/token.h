#pragma once
#ifndef TOKEN_H
#define TOKEN_H

#include <string>

/*
* Token object, will be used in the Lexer to represent pieces of the code, and will
* be used in the Parser to represent the abrstract syntax tree.
*/
class Token
{
// Public methods and fields
public:
	struct valueReturn {
		std::string stringValue;
		int intValue;
	};
	Token();
	Token(std::string tokenType);
	Token(std::string tokenType, std::string stringValue);
	Token(std::string tokentype, int intValue);
	valueReturn getValue();
	std::string getTokenType();
	std::string toString();

// Private Fields
private:
	std::string mStringValue;
	int mIntValue;
	std::string mTokenType;
};

#endif