<div align="center">
    <h1>File Parsing and Storage in a Nested Linked List Structure</h1>
    <img src="https://iili.io/JMf2vqX.png">
</div>

## Introduction
A linked list is a linear data structure commonly used as an alternative to arrays when you need to dynamically add items without a specific size requirement.

## Contents

- [Introduction](#introduction)
- [Contents](#contents)
- [Overview](#overview)
- [Prerequisites](#prerequisites)
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

## Classes Documentations
- [FileReader](src/include/FileReader/README.md): A class for reading text files and extracting lines and words from them.
- [LinkedListProcessor](src/include/LinkedListProcessor/README.md): The main processing class that is responsible for parsing and storage of text data using linked lists.
- [LineLinkedList](src/include/LineLinkedList/README.md): A linked list structure representing a single line of text, with each node containing a word.
- [MasterLinkedList](src/include/MasterLinkedList/README.md): A linked list structure containing line-linked lists, forming a hierarchical structure for storing text data.

## Usage
To use this repository, clone it. and ensure that your IDE supports C++.
```bash
git clone https://github.com/khaledsAlshibani/cpp-linkedlists-inside-linkedlist.git

cd cpp-linkedlists-inside-linkedlist
```