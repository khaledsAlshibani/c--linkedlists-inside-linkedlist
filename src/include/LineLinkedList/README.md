# `LineLinkedList` Class Overview
![Line Linked List](https://iili.io/JMxZis1.png)
The `LineLinkedList` class manages the linked list of words, each node inside it has a word, so then objects will be created from this class, each object will represent a full line that its nodes are contain a word for each node.

## Contents

- [`LineLinkedList` Class Overview](#linelinkedlist-class-overview)
  - [Contents](#contents)
  - [Class Members](#class-members)
  - [Constructor](#constructor)
  - [Member Functions](#member-functions)
  - [Frequently Asked Questions (FAQs)](#frequently-asked-questions-faqs)

## Class Members

- **`HEAD` Pointer**: The `HEAD` is the common name for the pointer indicates to the first node in the linked list, and it's used as the entry point or starting node of the linked list.
- **`TAIL` Pointer**: The `TAIL` pointer points to the last node in the linked list.

## Constructor

- **`LineLinkedList()`**: Initializes an empty linked list with null `HEAD` and `TAIL` pointers.

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
   - Returns an array containing all the nodes (words) of the linked list.

6. **`display()`**:
   - Displays all the nodes (words) of the linked list.

## Frequently Asked Questions (FAQs)
- Why use a linked list for storing words?
  - Linked lists provide dynamic memory allocation, allowing efficient insertion and deletion of elements. This makes them suitable for scenarios where the number of words may vary dynamically.

- Can words be inserted at any position in the list?
  - Yes it's possible with linked lists to insert or delete from any where in the linked list, but here we just make the insertion from the last as this is the only needed.

- What is the purpose of the `get()` function as the `display()` is exists?
  - The `get()` function returns all the nodes (words) of the linked list and as an array. It is used to insert the full linked list inside the [master linked list](../MasterLinkedList/README.md). On the other hand, the `display()` function prints all (nodes) words using the `cout` not `return`.
