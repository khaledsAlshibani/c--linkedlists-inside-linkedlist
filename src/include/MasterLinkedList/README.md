# `MasterLinkedList` Class Overview
![Master Linked List](https://iili.io/JMTgbjt.png)
The `MasterLinkedList` class manages a linked list of line-linked-lists, where each node contains the data of a whole line-linked-list.

## Contents

- [`MasterLinkedList` Class Overview](#masterlinkedlist-class-overview)
  - [Contents](#contents)
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

6. **`searchByWord(string key)`**:
   - Searches for a word in the lines and prints if it's found.
   - Parameters:
     - `key`: Is the word that the function search for.

7. **`searchByWordAndLine(int lineIndex, int wordIndex)`**:
   - Searches for a word at a specific position in a specific line and prints it.
   - Parameters:
     - `lineIndex`: The index of the line that the word will be searched in.
     - `wordIndex`: The index of the word in the `lineIndex` that the word will be searched in.

8. **`getLettersCountByWordIndex(int index)`**:
   - Returns the number of letters in a line at a specific index.
   - Parameters:
     - `index`: The index of the word.

9. **`getLettersCount()`**:
   - Returns the total number of letters in all lines.

10. **`getWordsCount(int lineIndex)`**:
    - Returns the total number of words in a specific line.
   - lineIndex:
     - `index`: The index of the line.

## Frequently Asked Questions (FAQs)

- Can lines be inserted at any position in the list?
  - Yes, lines can be inserted at the end of the list. The `insertLine()` function appends a new line to the end of the linked list, ensuring that lines are added in sequential order.