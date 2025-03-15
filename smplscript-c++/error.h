#pragma once
#ifndef ERROR_H
#define ERROR_H

#include <string>
#include "position.h"

/*
* Error object is the base class for future errors
*/

class Error
{
public:
	Error(std::string errorName, Position* posStart, Position* posEnd, std::string details);
	std::string toString();
private:
	std::string mErrorName;
	std::string mDetails;
	Position* mPosStart;
	Position* mPosEnd;
};

#endif
