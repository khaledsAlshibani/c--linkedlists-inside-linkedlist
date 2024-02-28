#pragma once
#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

class LineLinkedList
{
    Node *HEAD;

    bool isNotLastNode(Node *node)
    {
        return (node != nullptr);
    }

public:
    LineLinkedList()
    {
        HEAD = nullptr;
    }

    bool isEmpty()
    {
        return (HEAD == nullptr);
    }

    Node *insertWord(string data)
    {
        Node *newNode = new Node;

        if (isEmpty())
        {
            HEAD = newNode;
        }

        newNode->DATA = data;
        newNode->NEXT = nullptr;

        return newNode;
    }

    void displayNodes()
    {
        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            cout << TEMP_HEAD->DATA << " ";
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }
    }

    int getWordsCount()
    {
        int count = 0;

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            count++;
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }

        return count;
    }

    int getLettersCount()
    {
        int count = 0;

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            count += TEMP_HEAD->DATA.length();
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }

        return count;
    }

    int getLettersCountByWordIndex(int index)
    {
        int loopIndex = 0;
        int count = 0;

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            loopIndex++;
            TEMP_HEAD = TEMP_HEAD->NEXT;

            if (loopIndex == index)
            {
                break;
                return TEMP_HEAD->DATA.length();
            }
            else
            {
                return -1;
            }
        }
    }

    void searchByWord(string key)
    {
        int counter = 0;

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            TEMP_HEAD = TEMP_HEAD->NEXT;
            counter++;

            if (TEMP_HEAD->DATA == key)
            {
                break;
                cout << "The word: '" << key << "' is found. It's order of the line is: " << counter << endl;
            }
            else
            {
                cout << "The word: '" << key << "' is not found." << endl;
            }
        }
    }
};