#include "illegalCharError.h"
#include "error.h"
#include "position.h"
#include <string>

// Constructor
// Calls the Error constructor with the "Illegal Character" error name and details
IllegalCharError::IllegalCharError(Position* posStart, Position* posEnd, std::string details) : Error("Illegal Character", posStart, posEnd, details) {}
