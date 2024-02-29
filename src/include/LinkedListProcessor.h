#pragma once
#include <iostream>
#include <string>
#include "FileReader.h"
#include "LineLinkedList.h"
using namespace std;

class LinkedListProcessor
{
    string filePath;

public:
    LinkedListProcessor() : filePath("../assets/data.txt") {}
    LinkedListProcessor(const string &filePath) : filePath(filePath) {}

    void process()
    {
        FileReader file(filePath);
        int count = file.getLinesCount();

        LineLinkedList *lines = new LineLinkedList[count];

        for (int index = 0; index < count; ++index)
        {
            string *words = file.getWordsByLine(index);
            if (words != nullptr)
            {
                lines[index].insertMultipleWords(words, file.getWordsCountByLine(index));
                delete[] words;
            }
        }

        delete[] lines;
        lines[1].getWordsCount();
    }
};
