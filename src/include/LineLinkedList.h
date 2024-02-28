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
        newNode->DATA = data;
        newNode->NEXT = nullptr;

        if (isEmpty())
        {
            HEAD = newNode;
        }
        else
        {
            Node *TEMP_HEAD = HEAD;
            while (TEMP_HEAD->NEXT != nullptr)
            {
                TEMP_HEAD = TEMP_HEAD->NEXT;
            }
            TEMP_HEAD->NEXT = newNode;
        }

        return newNode;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            cout << TEMP_HEAD->DATA << " ";
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }
        cout << endl;
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

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            loopIndex++;

            if (loopIndex == index)
            {
                return TEMP_HEAD->DATA.length();
            }

            TEMP_HEAD = TEMP_HEAD->NEXT;
        }

        return -1;
    }

    void searchByWord(string key)
    {
        int counter = 0;
        bool isFound = false;

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            counter++;
            if (TEMP_HEAD->DATA == key)
            {
                isFound = true;
                break; // Exit the loop once the word is found
            }
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }

        if (isFound)
        {
            cout << "The word: '" << key << "' is found. It's order of the line is: " << counter << endl;
        }
        else
        {
            cout << "The word: '" << key << "' is not found." << endl;
        }
    }
};