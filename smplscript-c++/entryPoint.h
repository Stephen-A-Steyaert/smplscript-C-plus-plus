#pragma once
#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

#include "lexer.h"
#include <string>

// run function for console input
Lexer::valueReturn run(std::string fileName, std::string text);

#endif