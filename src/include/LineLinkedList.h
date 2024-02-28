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

    bool isNotLastNodeByNext(Node *node)
    {
        return (node->NEXT != nullptr);
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

    void insertWord(string data)
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
            while (isNotLastNodeByNext(TEMP_HEAD))
            {
                TEMP_HEAD = TEMP_HEAD->NEXT;
            }
            TEMP_HEAD->NEXT = newNode;
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

    string *get()
    {
        if (isEmpty())
        {
            return nullptr;
        }

        string *nodesData = new string[this->getWordsCount()];
        Node *TEMP_HEAD = HEAD;
        int index = 0;

        while (TEMP_HEAD != nullptr && index <= this->getWordsCount())
        {
            nodesData[index++] = TEMP_HEAD->DATA;
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }

        return nodesData;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "\nNo words added yet to the linked list" << endl;
            return;
        }

        cout << "The inserted words are: ";

        Node *TEMP_HEAD = HEAD;
        while (isNotLastNode(TEMP_HEAD))
        {
            cout << TEMP_HEAD->DATA << ",";
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }
        cout << endl;
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
                break;
            }
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }

        if (isFound)
        {
            cout << "\nThe word: '" << key << "' is found. It's order of the line is: " << counter << endl;
        }
        else
        {
            cout << "\nThe word: '" << key << "' is not found." << endl;
        }
    }
};