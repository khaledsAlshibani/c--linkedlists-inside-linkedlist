#pragma once
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string DATA;
    Node *NEXT;

    Node()
    {
        DATA = "";
        NEXT = nullptr;
    }
};