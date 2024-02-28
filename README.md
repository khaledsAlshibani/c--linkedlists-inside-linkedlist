# Explaining Linked List Data Structure in C++

## Table of Contents

- [Explaining Linked List Data Structure in C++](#explaining-linked-list-data-structure-in-c)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Overview](#overview)
  - [Prerequisites](#prerequisites)
  - [Code Explanation](#code-explanation)
    - [Node Class](#node-class)

## Introduction
A linked list is a data structure commonly used as an alternative to arrays when you need to dynamically add items without a specific size requirement.

## Overview
The purpose of this repository is to demonstrate how to implement a linked list data structure in C++. The program reads a file containing text, breaks it into lines, and then further breaks each line into words. Each line is represented by a linked list, where each word is stored in a node of the linked list. Finally, all the lines are stored in another linked list.

## Prerequisites
Before diving into the code, it is recommended to have the following knowledge:
- Basic understanding of C++ fundamentals
- Familiarity with pointers
- Basic understanding of object-oriented programming (OOP) concepts

## Code Explanation

### Node Class

The `Node` class is responsible for handling the nodes in the linked list. It has two member variables: `data`, which is a string that stores the content of the node, and `NEXT`, which is a pointer to the next node in the linked list.

```cpp
class Node
{
public:
    string data;
    Node *NEXT;

    Node()
    {
        this->data = "";
        this->NEXT = NULL;
    }
};
```

In the constructor, the `data` variable is initialized to an empty string, and the `NEXT` pointer is set to `NULL`, indicating that it does not currently point to any node.