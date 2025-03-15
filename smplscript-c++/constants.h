#pragma once
#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

/*
Constants for Lexer, Parser. Will eventually contain keywords
for defining functions, while and for loops, etc.
*/

namespace constants {

	const std::string TT_INT = "TT_INT";
	const std::string TT_FLOAT = "TT_FLOAT";
	const std::string TT_PLUS = "TT_PLUS";
	const std::string TT_MINUS = "TT_MINUS";
	const std::string TT_MUL = "TT_MUL";
	const std::string TT_DIV = "TT_DIV";
	const std::string TT_LPAREN = "TT_LPAREN";
	const std::string TT_RPAREN = "TT_RPAREN";

	// Alphanumeric constants
	const std::string DIGITS = "0123456789";
	const std::string LETTERS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
}

#endif