#pragma once
#include <iostream>
#include <string>
#include "../FileReader/FileReader.h"
#include "../LineLinkedList/LineLinkedList.h"
#include "../MasterLinkedList/MasterLinkedList.h"
using namespace std;

class LinkedListProcessor
{
    string filePath;
    FileReader fileReader;
    MasterLinkedList masterList;

public:
    LinkedListProcessor() : filePath("../assets/data.txt"), fileReader(filePath) {}
    LinkedListProcessor(const string &filePath) : filePath(filePath), fileReader(filePath) {}

    void processFile()
    {
        int totalFileLines = fileReader.getLinesCount();
        LineLinkedList *lineList = new LineLinkedList[totalFileLines];

        fileReader.resetFile();

        for (int lineNumber = 0; lineNumber < totalFileLines; lineNumber++)
        {
            // Generate instances objects of LineLinkedList dynamically
            string *lineWords = fileReader.getWordsByLine(lineNumber);
            if (lineWords == nullptr)
            {
                cout << "Line " << lineNumber + 1 << " is empty" << endl;
                continue;
            }
            int lineWordsCount = fileReader.getWordsCountByLine(lineNumber);

            // insert words into generated objects of LineLinkedList
            lineList[lineNumber].insertMultipleWords(lineWords, lineWordsCount);

            // Insert LineLinkedList objects into MasterLinkedList
            string *masterWords = lineList[lineNumber].get();
            int masterWordsCount = lineList[lineNumber].getWordsCount();
            masterList.insertLine(masterWords, masterWordsCount);

            delete[] lineWords;
        }
    }

    MasterLinkedList getMasterList()
    {
        return masterList;
    }
};
