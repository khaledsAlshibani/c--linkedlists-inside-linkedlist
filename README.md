<div align="center">
    <h1>File Parsing and Storage in a Nested Linked List Structure</h1>
    <img src="https://iili.io/JMf2vqX.png">
</div>

## Introduction
The program reads a file containing text, breaks it into lines, and then further breaks each line into words. Each line is represented by a linked list, where each word is stored in a node of the linked list. Finally, all the lines are stored in another linked list.

## Contents

- [Introduction](#introduction)
- [Contents](#contents)
- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Pros](#pros)
- [Cons](#cons)
- [Classes Documentations](#classes-documentations)
- [Usage](#usage)

## Overview
This repository was created as a project assignment for college, implementing a linked list data structure in C++. The program reads a file containing text, breaks it into lines, and then further breaks each line into words. Each line is represented by a linked list, where each word is stored in a node of the linked list. Finally, all the lines are stored in another linked list.

## Prerequisites
Before diving into the code, it is recommended to have the following knowledge:
- Basic understanding of C++ fundamentals.
- Familiarity with memory management and Pointers: Linked lists rely on dynamic memory allocation and pointer manipulation.
- Basic understanding of object-oriented programming (OOP) concepts.
- Knowledge of file handling operations, particularly reading files.

## Pros
- Using object-oriented programming (OOP).
- Detailed explanations for each class file within **README.md** files.

## Cons
- Time and space complexity considerations are not optimized (we plan to do enhancements).
- 
## Classes Documentations
- [FileReader](src/include/FileReader/README.md): A class for reading text files and extracting lines and words from them.
- [Node](src/include/Node/README.md): A class representing a single node in a linked list, storing data and a pointer to the next node.
- [LineLinkedList](src/include/LineLinkedList/README.md): A linked list structure representing a single line of text, with each node containing a word.
- [MasterLinkedList](src/include/MasterLinkedList/README.md): A linked list structure containing line-linked lists, forming a hierarchical structure for storing text data.
- [LinkedListProcessor](src/include/LinkedListProcessor/README.md): The main processing class that is responsible for parsing and storage of text data using linked lists.
- [Menu](src/include/Menu/README.md): A class that lets the user interacting with the program, by displaying a menu of operations and processing the operation they want to process.

## Usage
To use this repository, clone it. and ensure that your IDE supports C++.
```bash
git clone https://github.com/khaledsAlshibani/cpp-nested-linked-lists.git

cd cpp-nested-linked-lists
```