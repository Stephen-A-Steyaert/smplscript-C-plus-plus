#pragma once
#ifndef LEXER_H
#define LEXER_H

#include "illegalCharError.h"
#include "token.h"
#include "position.h"
#include <string>
#include <vector>

/*
* Lexer object will be use to tokenize input code.
*/

class Lexer
{
public:
	struct valueReturn {
		IllegalCharError error;
		bool hasError;
		std::vector<Token> tokens;
	};
	Lexer();
	Lexer(std::string fileName, std::string text);
	valueReturn generateTokens();
private:
	void advance();
	Token makeNumber();
	std::string mFileName;
	std::string mText;
	char mCurrentChar;
	Position* mCurrentPos;
};

#endif