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
- [Let's Connect](#lets-connect)
  - [Sharaf ALmikhlafi](#sharaf-almikhlafi)
  - [Khaled Alshibani](#khaled-alshibani)
    - [Website \& CV](#website--cv)

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
- [Node](src/include/Node/README.md): A class representing a single node in a linked list, storing data and a pointer to the next node.
- [LineLinkedList](src/include/LineLinkedList/README.md): A linked list structure representing a single line of text, with each node containing a word.
- [MasterLinkedList](src/include/MasterLinkedList/README.md): A linked list structure containing line-linked lists, forming a hierarchical structure for storing text data.
- [LinkedListProcessor](src/include/LinkedListProcessor/README.md): The main processing class that is responsible for parsing and storage of text data using linked lists.
- [Menu](src/include/Menu/README.md): A class that lets the user interacting with the program, by displaying a menu of operations and processing the operation they want to process.

## Usage
To use this repository, clone it. and ensure that your IDE supports C++.
```bash
git clone https://github.com/khaledsAlshibani/cpp-linkedlists-inside-linkedlist.git

cd cpp-linkedlists-inside-linkedlist
```

## Let's Connect

### Sharaf ALmikhlafi
[![Sharaf's GitHub](https://img.shields.io/badge/GitHub-Follow-9cf?style=for-the-badge&logo=github)](https://github.com/sharafALmikhlafi)

### Khaled Alshibani
[![Khaled's GitHub](https://img.shields.io/badge/GitHub-Follow-9cf?style=for-the-badge&logo=github)](https://github.com/khaledsAlshibani)
[![Khaled's CodePen](https://img.shields.io/badge/CodePen-Follow-9cf?style=for-the-badge&logo=codepen)](https://codepen.io/khaledsAlshibani)
[![Khaled's LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-9cf?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/khaledsAlshibani)
[![Khaled's Twitter](https://img.shields.io/badge/Twitter-Follow-9cf?style=for-the-badge&logo=x)](https://twitter.com/khaleds_saif)

#### Website & CV

[![Khaled's Website](https://img.shields.io/badge/Website-Visit-9cf?style=for-the-badge&logo=appveyor)](https://khaled.technway.biz/)
[![Khaled's CV (Resume)](https://img.shields.io/badge/CV-View-9cf?style=for-the-badge&logo=appveyor)](https://khaled.technway.biz/assets/Khaled-Alshibani-Resume.pdf)

Feel free to explore my repositories, and don't hesitate to connect with me on social media or reach out for collaboration and discussions!
