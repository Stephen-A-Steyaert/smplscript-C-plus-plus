#include "token.h"
#include <string>
#include <ostream>

/*
* Defining all of the Token object's functions
*/
// Default constructor
// Initializes all fields to null
Token::Token() {
	mTokenType = nullptr;
	mStringValue = nullptr;
	mIntValue = NULL;
}
// Constructor
// Initializes the token type field to the input token type
Token::Token(std::string tokenType) {
	mTokenType = tokenType;
	mStringValue = nullptr;
	mIntValue = NULL;
}
// Constructor
// Initializes the token type field to the input token type,
// and the string value field to the input string value
Token::Token(std::string tokenType, std::string stringValue) {
	mTokenType = tokenType;
	mStringValue = stringValue;
	mIntValue = NULL;
}
// Constructor
// Initializes the token type field to the input token type,
// and the int value field to the input int value
Token::Token(std::string tokenType, int intValue) {
	mTokenType = tokenType;
	mStringValue = nullptr;
	mIntValue = intValue;
}
// getValue function
// Returns a valueReturn struct containing the string and int values
Token::valueReturn Token::getValue() {
	valueReturn returnValue;
	returnValue.stringValue = mStringValue;
	returnValue.intValue = mIntValue;
	return returnValue;
}
// getTokenType function
// Returns the token type
std::string Token::getTokenType() {
	return mTokenType;
}
// operator<< function
// Overloads the << operator to print the token type and value (if it exists)
std::string Token::toString() {
	std::string out = mTokenType;
	if (mStringValue.compare(nullptr) != 0) {
		out += ":" + mStringValue;
	}
	else if (mIntValue != NULL) {
		out += ":" + mIntValue;
	}
}