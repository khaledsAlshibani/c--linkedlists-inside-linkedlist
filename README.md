<div align="center">
    <h1>Reading File & Storing it Inside a Linked List of Linked Lists</h1>
    <img src="https://iili.io/JMf2vqX.png">
</div>

## Introduction
A linked list is a data structure commonly used as an alternative to arrays when you need to dynamically add items without a specific size requirement.

## Table of Contents

- [Introduction](#introduction)
- [Table of Contents](#table-of-contents)
- [Overview](#overview)
- [Prerequisites](#prerequisites)
  - [Code Explanation](#code-explanation)
    - [Node Class](#node-class)
    - [Line Linked List](#line-linked-list)

## Overview
The purpose of this repository is to demonstrate how to implement a linked list data structure in C++. The program reads a file containing text, breaks it into lines, and then further breaks each line into words. Each line is represented by a linked list, where each word is stored in a node of the linked list. Finally, all the lines are stored in another linked list.

## Prerequisites
Before diving into the code, it is recommended to have the following knowledge:
- Basic understanding of C++ fundamentals
- Familiarity with memory management and Pointers: Linked lists rely on dynamic memory allocation and pointer manipulation.
- Basic understanding of object-oriented programming (OOP) concepts

### Code Explanation

#### Node Class
The `Node` class is the building block of the linked list. Each node consists of two primary components:

- **Data Field**: This field stores the actual content of the node.
- **Pointer to Next Node (NEXT)**: This pointer establishes the connection between nodes, indicating the location of the next node in the sequence.

The `Node` class definition includes a constructor to initialize the node with default values and preparing the creation of new nodes.

#### Line Linked List
The `LineLinkedList` class manages the linked list of nodes. **Key components of this class include**:

- **HEAD Pointer**: This pointer serves as the entry point or starting node of the linked list.
- **isEmpty() Method**: This method checks whether the linked list is empty by checking the `HEAD` pointer. If the HEAD pointer is `nullptr`, indicating the absence of nodes, the method returns true; otherwise, it returns false.
- **insertWord() Method**: This method adds a new node to the linked list, representing a word in a line of text. It dynamically allocates memory for the new node using the `new` keyword, it also links the inserted node with the other nodes in the linked list.