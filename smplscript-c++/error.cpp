#include "error.h"

#include <string>

// Constructor
// Initializes the error name and details
Error::Error(std::string errorName, std::string details) {
	mErrorName = errorName;
	mDetails = details;
}
// toString function
// Returns the error name and details as a string
std::string Error::toString() {
	return mErrorName + ": " + mDetails;
}