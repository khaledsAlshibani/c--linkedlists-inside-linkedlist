# `Node` Class Overview
![Node](https://iili.io/JMxZLqF.png)
The `Node` class is the building block in the architecture of linked lists. Each node consists of **two primary components**:

  1. **Data member variable (`DATA`)**:
    - It stores the actual content of the node, it specifically stores string data.
  2. **Pointer to Next Node (`NEXT`)**:
    - This pointer establishes the link or connection between nodes  within the linked list, It points to the memory address of the next node in the sequence, allowing traversal through the list.

In addition, the class provides a constructor that initializes the `DATA` with an empty string (`""`) and sets the `NEXT` pointer to `nullptr`, indicating no connection to another node.

## Frequently Asked Questions (FAQs)
- Why is the data type of `NEXT` `Node`?
  - The data type of `NEXT` is `Node` to adhere to the principle that pointers should align with the data type they reference. In this context, `NEXT` points to an object of type `Node`, as it's created by the `Node` class.

- Why is `NEXT` initialized as `nullptr` instead of `NULL`?
  - `NEXT` is initialized as `nullptr` to represents a null pointer value. While both `nullptr` and `NULL` represent this role, `nullptr` is type-safe and distinct from integer types, providing better type checking and compatibility with modern C++ features.

- What is `#pragma once` at the head of the file?
  - `#pragma once` is a preprocessor directive that ensures a header file is included only once during compilation. It serves the same purpose as traditional include guards (`#ifndef`, `#define`, `#endif`), but with fewer lines of code and improved compile speed. It helps prevent issues like [circular dependencies](https://en.wikipedia.org/wiki/Circular_dependency#:~:text=In%20software%20engineering%2C%20a%20circular,also%20known%20as%20mutually%20recursive.) and reduces the likelihood of [name clashes](https://codepal.ai/error-message-explainer/query/atlCEDvx/naming-conflict-in-cpp-code#:~:text=When%20the%20same%20name%20is,number%3B%20in%20the%20code%20snippet.).