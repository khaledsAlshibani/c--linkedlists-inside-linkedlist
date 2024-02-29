#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class FileReader
{
    ifstream file;
    string filename;

    bool isFileExist()
    {
        return (file.fail() ? false : true);
    }

public:
    FileReader(const string &filename)
    {
        this->filename = filename;
        file.open(filename, ios::in);
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

    void displayFileByWords() {
        string word;
        while (file >> word) {
            cout << word << endl;
        }
    }

    ~FileReader() {
        file.close();
    }
};