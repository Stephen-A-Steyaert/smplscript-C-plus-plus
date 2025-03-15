#pragma once
#ifndef ILLEGALCHARERROR_H
#define ILLEGALCHARERROR_H

#include "error.h"
#include <string>

/*
* Error object for all illegal characters
*/
class IllegalCharError : public Error
{
public:
	IllegalCharError(std::string details);
};

#endif