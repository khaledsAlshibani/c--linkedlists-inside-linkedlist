# `MasterLinkedList` Class Overview
![Master Linked List](https://iili.io/JMTgbjt.png)
The `MasterLinkedList` class manages a linked list of line-linked-lists, where each node contains the data of a whole line-linked-list.

## Contents

- [`MasterLinkedList` Class Overview](#masterlinkedlist-class-overview)
  - [Contents](#table-of-contents)
  - [Class Members](#class-members)
  - [Constructor](#constructor)
  - [Member Functions](#member-functions)
  - [Frequently Asked Questions (FAQs)](#frequently-asked-questions-faqs)

## Class Members

- **`HEAD` Pointer**: The `HEAD` is the common name for the pointer indicates to the first node in the linked list. serves as the entry point or starting node of the linked list.

## Constructor

- **`LineLinkedList()`**: Initializes an empty linked list with a null `HEAD` pointer.

## Member Functions

1. **`isEmpty()`**:
   - Checks if the linked list is empty by checking the `HEAD` pointer.
   - If the HEAD pointer is `nullptr`, indicating the initialized value and the absence of nodes, the method returns true, otherwise, it returns false.

2. **`insertLine(string *words, int count)`**:
   - Inserts a line into the linked list, it receives an array of words and then enter all the receiveed words inside a single node.
   - Parameters:
     - `words`: A pointer to an array of strings containing the words in the line.
     - `count`: The number of words in the line.

3. **`getLinesCount()`**:
   - Returns the total number of lines in the linked list.

4. **`display()`**:
   - Displays all the lines stored in the linked list.

5. **`displayByLineIndex(int index)`**:
   - Displays the line at the specified index in the linked list.
   - Parameters:
     - `index`: The index of the line to display.

## Frequently Asked Questions (FAQs)

- Can lines be inserted at any position in the list?
  - Yes, lines can be inserted at the end of the list. The `insertLine()` function appends a new line to the end of the linked list, ensuring that lines are added in sequential order.

- How efficient is the retrieval of lines by index?
  - The `displayByLineIndex(int index)` function retrieves a line by its index in the linked list. It traverses the list sequentially until the target index is reached or the end of the list is encountered. Therefore, the time complexity of this operation is `O(n)`, where `n` is the number of lines in the list.

- What is the time and space complexity of inserting a line?
  - **Time Complexity**: The time complexity of inserting a line into the `MasterLinkedList` class depends on the total number of words being inserted, denoted by `n`, and the average length of each word, denoted by `k`. 
        - When inserting a line, the algorithm iterates through each word in the line and performs concatenation operations to construct the line. The time complexity of concatenating a single word to the line is O(k), and this operation is performed for each of the `n` words.
        - Therefore, the overall time complexity of inserting a line is O(n * k).

  - **Space Complexity**: The space complexity for inserting a line is O(n), where `n` is the total number of words being inserted. This is because memory is allocated for each individual node in the linked list, and the space required is directly related to the number of words in the line.
  
- What is `#pragma once` at the head of the file?
  - `#pragma once` is a preprocessor directive that ensures a header file is included only once during compilation. It serves the same purpose as traditional include guards (`#ifndef`, `#define`, `#endif`), but with fewer lines of code and improved compile speed. It helps prevent issues like [circular dependencies](https://en.wikipedia.org/wiki/Circular_dependency#:~:text=In%20software%20engineering%2C%20a%20circular,also%20known%20as%20mutually%20recursive.) and reduces the likelihood of [name clashes](https://codepal.ai/error-message-explainer/query/atlCEDvx/naming-conflict-in-cpp-code#:~:text=When%20the%20same%20name%20is,number%3B%20in%20the%20code%20snippet.).