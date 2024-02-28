#pragma once
#include <iostream>
#include <string>
#include "Node.h"
#include "LineLinkedList.h"
using namespace std;

class FileLinkedList
{
    Node *HEAD;

    bool isNotLastNode(Node *node)
    {
        return (node != nullptr);
    }

public:
    FileLinkedList()
    {
        HEAD = nullptr;
    }

    bool isEmpty()
    {
        return (HEAD == nullptr);
    }

    void insertLine(LineLinkedList data)
    {
        Node *newNode = new Node;
        newNode->NEXT = nullptr;

        if (isEmpty())
        {
            HEAD = newNode;
        }
        else
        {
            Node *temp = HEAD;
            while (temp->NEXT != nullptr)
            {
                temp = temp->NEXT;
            }
            temp->NEXT = newNode;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "\nList is empty." << endl;
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