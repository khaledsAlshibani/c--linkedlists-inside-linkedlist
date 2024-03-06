#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

class FileReader
{
    ifstream file;
    string filePath;

    bool isFileExist()
    {
        return (file.fail() ? false : true);
    }

public:
    FileReader(const string &filePath)
    {
        this->filePath = filePath;
        file.open(filePath, ios::in);
        if (!isFileExist())
        {
            cout << "Error: Unable to open file " << filePath << endl;
        }
    }

    void resetFile()
    {
        file.clear();
        file.seekg(0, ios::beg);
    }

    int getLinesCount()
    {
        string line;
        int count = 0;
        while (getline(file, line))
        {
            count++;
        }

        return count;
    }

    int getWordsCountByLine(int key)
    {
        string line;
        int count = 0;
        int loopIndex = 0;

        resetFile();

        while (getline(file, line))
        {
            if (loopIndex == key)
            {
                istringstream iss(line); 
                string word;

                while (iss >> word)
                {
                    count++;
                }

                break;
            }
            loopIndex++;
        }

        return count;
    }

    string *getWordsByLine(int key)
    {
        string line;
        int loopIndex = 0;
        bool isFound = false;

        string *words = new string[this->getWordsCountByLine(key)];

        resetFile();

        while (getline(file, line))
        {
            if (loopIndex == key)
            {
                istringstream iss(line);
                string word;
                int wordIndex = 0;

                while (iss >> word)
                {
                    words[wordIndex++] = word;
                }

                isFound = true;
                break;
            }
            loopIndex++;
        }

        if (!isFound)
        {
            delete[] words;
            return nullptr;
        }

        return words;
    }

    ~FileReader()
    {
        resetFile();
        file.close();
    }
};