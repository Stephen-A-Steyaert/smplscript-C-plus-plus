#pragma once
#ifndef LEXER_H
#define LEXER_H

#include "illegalcharerror.h"
#include "token.h"
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
	Lexer(std::string text);
	valueReturn generateTokens();
private:
	void advance();
	Token makeNumber();
	std::string mText;
	char mCurrentChar;
	int mCurrentPos;
};

#endif