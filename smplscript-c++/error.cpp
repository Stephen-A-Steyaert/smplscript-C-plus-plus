#include "error.h"

#include <string>
#include "position.h"

// Constructor
// Initializes the error name and details
Error::Error(std::string errorName, Position* posStart, Position* posEnd, std::string details) {
	mErrorName = errorName;
	mDetails = details;
	mPosStart = posStart;
	mPosEnd = posEnd;
}
// toString function
// Returns the error name and details as a string
std::string Error::toString() {
	std::string errorStr = mErrorName + ": " + mDetails + "\n";
	errorStr += "File: " + mPosStart->getFileName() + " Line: " + std::to_string(mPosStart->getLineNumber()) + "\n";

	return errorStr;
}