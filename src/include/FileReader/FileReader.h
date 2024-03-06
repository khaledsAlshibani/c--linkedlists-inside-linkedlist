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

    void displayLines()
    {
        string line;
        while (getline(file, line))
        {
            cout << line << "\n\n\n\n";
        }
    }

    void displayWords()
    {
        string word;
        while (file >> word)
        {
            cout << word << endl;
        }
    }

    void displayWordsByLine(int index)
    {
        string line;
        int loopIndex = 1;
        bool isFound = false;

        while (getline(file, line))
        {
            if (loopIndex == index)
            {
                string word;

                while (file >> word)
                {
                    cout << word << endl;
                }

                isFound = true;
                break;
            }
            loopIndex++;
        }

        if (!isFound)
        {
            cout << "Line " << index << " not found" << endl;
        }
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