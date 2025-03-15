#include "illegalCharError.h"

// Constructor
// Calls the Error constructor with the "Illegal Character" error name and details
IllegalCharError::IllegalCharError(std::string details) : Error("Illegal Character", details) {}
