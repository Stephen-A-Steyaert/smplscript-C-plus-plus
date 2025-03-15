#pragma once
#ifndef POSITION_H
#define POSITION_H

#include <string>

/*
* Position object to keep track of the current position in the source code.
*/
class Position {
public:
    Position(int index, int line, int col, std::string fileName, std::string fileContents);
    Position* advance(char c);
    Position copy();
    int getIndex();
    std::string getFileName();
    int getLineNumber();

private:
    int mIndex;
    int mLine;
    int mCol;
    std::string mFileName;
    std::string mFileContents;

};

#endif