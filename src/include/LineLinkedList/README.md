# `LineLinkedList` Class Overview
![Line Linked List](https://iili.io/JMxZis1.png)
The `LineLinkedList` class manages the linked list of words, each node inside it has a word, so then objects will be created from this class, each object will represent a full line that its nodes are contain a word for each node.

## Table of Contents

- [`LineLinkedList` Class Overview](#linelinkedlist-class-overview)
  - [Table of Contents](#table-of-contents)
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


2. **`insertMultipleWords(string *words, int count)`**:
   - Inserts multiple words at the same time into the linked list, it create nodes at the last a node for each added word and then insert each word inside a node (Nol all words in the same node).
   - Parameters:
     - `words`: A pointer to an array of strings containing the words will be inserted.
     - `count`: The number of words that will be inserted.

3. **`insertWord(string data)`**:
   - Inserts a single word into the linked list, create a single node at the last and insert the word inside it, and link the node to the other nodes.
   - Parameters:
     - `data`: The word will be inserted.

4. **`getWordsCount()`**:
   - Returns the total count of words in the linked list.

5. **`get()`**:
   - Returns an array containing all the words stored in the linked list.

6. **`display()`**:
   - Displays all the words stored in the linked list.

7. **`getLettersCount()`**:
   - Returns the total count of letters in all words stored in the linked list.

8. **`getLettersCountByWordIndex(int index)`**:
   - Returns the count of letters in the word at the specified index of the line.
   - Parameters:
     - `index`: The index of the line that will return its total letters.

9.  **`searchByWord(string key)`**:
   - Searches for a word in the linked list and prints its position if found.
   - Parameters:
     - `key`: The word that will be searched inside the whole linked list.

## Frequently Asked Questions (FAQs)
- Why use a linked list for storing words?
  - Linked lists provide dynamic memory allocation, allowing efficient insertion and deletion of elements. This makes them suitable for scenarios where the number of words may vary dynamically.

- Can words be inserted at any position in the list?
  - Yes it is possible with linked lists to insert or deleter from any where in the linked list, but here I just make the insertion from the last as this is the only needed.

- What is the purpose of the `get()` function as the `display()` is exists?
  - The `get()` function retrieves all the words stored in the linked list and returns them as an array, it's used to insert the full linked list inside the master linked list, while the `display()` doe not return the words, id prints all word using the `cout`.

- How efficient is the search operation performed by `searchByWord(string key)`?
  - The search operation iterates through the linked list sequentially until the target word is found or the end of the list is reached. This results in a time complexity of O(n), where n is the number of words in the list.

- What are the Time and Space Complexities of Single Word Insertion:
  - **Time Complexity**: The time complexity of inserting a single word into the linked list is `O(n)`, where `n` is the number of words already present in the list. This is because the insertion process requires [traversing](https://stackoverflow.com/questions/16327461/what-is-the-difference-between-iteration-and-traversing) the list to find the insertion point.
  - **Space Complexity**: The space complexity of inserting a single word is O(1), as it only requires memory allocation for a single node.

- Time and Space Complexities of All Words Insertion:
  - **Time Complexity**: The time complexity of inserting all words into the linked list depends on the total number of words being inserted, denoted by n. If there are n words to be inserted, and the average length of each word is k, then the overall time complexity is O(n * k). This is because each word insertion process takes O(k) time, and we perform this operation for each of the n words.
  - **Space Complexity**: The space complexity for inserting all words is O(m), where m is the total number of words being inserted. This is because memory is allocated for each individual node in the linked list.

- What is `#pragma once` at the head of the file?
  - `#pragma once` is a preprocessor directive that ensures a header file is included only once during compilation. It serves the same purpose as traditional include guards (`#ifndef`, `#define`, `#endif`), but with fewer lines of code and improved compile speed. It helps prevent issues like [circular dependencies](https://en.wikipedia.org/wiki/Circular_dependency#:~:text=In%20software%20engineering%2C%20a%20circular,also%20known%20as%20mutually%20recursive.) and reduces the likelihood of [name clashes](https://codepal.ai/error-message-explainer/query/atlCEDvx/naming-conflict-in-cpp-code#:~:text=When%20the%20same%20name%20is,number%3B%20in%20the%20code%20snippet.).