#include "position.h"
#include <string>
// Constructor
// Initializes the Position object with the given index, line, and column.
Position::Position(int index, int line, int col, std::string fileName, std::string fileContents) {
    mIndex = index;
    mLine = line;
    mCol = col;
    mFileName = fileName;
    mFileContents = fileContents;
}

// advance function
// Advances the index and column by 1. May also increment the line and reset the column 
// if the character is a newline.
Position* Position::advance(char c) {
    mIndex++;
    mCol++;
    if (c == '\n') {
        mLine++;
        mCol = 0;
    }
    return this;
} 

// copy function
// Returns a new Position object with the same index, line, and column as the current object.
Position Position::copy() {
    return Position(mIndex, mLine, mCol, mFileName, mFileContents);
}

// getIndex function
// Returns the current index of the Position object.
int Position::getIndex() {
    return mIndex;
}

// getFileName function
// Returns the file name of the Position Object.
std::string Position::getFileName() {
    return mFileName;
}

// getLineNumber function
// Returns the current line number of the Position object.
int Position::getLineNumber() {
    return mLine;
}