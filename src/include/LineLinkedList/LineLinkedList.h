#pragma once
#include <iostream>
#include <string>
#include "../Node/Node.h"
using namespace std;

class LineLinkedList
{
    Node *HEAD;
    Node *TAIL;

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
        HEAD = TAIL = nullptr;
    }

    bool isEmpty()
    {
        return (HEAD == nullptr);
    }

    void insertMultipleWords(string *words, int count)
    {
        for (int i = 0; i < count; i++)
        {
            Node *newNode = new Node;
            newNode->NEXT = nullptr;
            newNode->DATA += words[i];

            if (isEmpty())
            {
                HEAD = TAIL = newNode;
            }
            else
            {
                TAIL->NEXT = newNode;
                TAIL = newNode;
            }
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

        while (TEMP_HEAD != nullptr && index < this->getWordsCount())
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
            cout << TEMP_HEAD->DATA << " ";
            TEMP_HEAD = TEMP_HEAD->NEXT;
        }
        cout << endl;
    }
};