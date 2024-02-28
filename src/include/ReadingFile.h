#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class ReadingFile
{
    ifstream file;
    string filename;

    bool isFileExist()
    {
        return (file.fail() ? false : true);
    }

public:
    ReadingFile(const string &filename)
    {
        this->filename = filename;
        file.open(filename);
        if (!isFileExist())
        {
            cout << "Error: Unable to open file " << filename << endl;
        }
    }

    void displayFileByLines()
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl << endl;
        }
    }
};