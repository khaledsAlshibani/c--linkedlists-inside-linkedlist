# `LinkedListProcessor` Class Overview
The `LinkedListProcessor` class purpose is to process text files by inserting each line from the file into dynamically generated line-linked-lists.

## Class Members

- **`filePath`**: The path of the file to be processed.
- **`fileReader`**: An instance of the `FileReader` class which job is to read the specified file.
- **`masterList`**: An instance of the `MasterLinkedList` class for inserting lines-linked-lists.

## Constructors

- **`LinkedListProcessor()`**: a default constructor with the default file path "../assets/data.txt" and creates an instance of the `FileReader`.
- **`LinkedListProcessor(const string &filePath)`**: Initializes a `LinkedListProcessor` object with the provided file path and creates an instance of the `FileReader`.

## Member Functions

1. **`processFile()`**:
   - Creates a dynamic array of `LineLinkedList` objects, with the size equal to the total number of lines in the file, using the `new` keyword.
   - Resets the file stream to its initial state and positions the file pointer at the beginning of the file using the `resetFile()` method.
   - Iterates through each line of the file:
      1. Retrieves an array of words from the current line using the `getWordsByLine()` method.
      2. Checks if the retrieved array of words is empty. If so, it prints a message indicating that the line is empty.
      3. If the line is not empty, it determines the number of words in the line using the `getWordsCountByLine()` method.
      4. Inserts the words from the current line into the corresponding `LineLinkedList` object using the `insertMultipleWords()` method.
      5. Retrieves an array of words from the `LineLinkedList` object.
      6. Inserts the array of words into the `MasterLinkedList` object using the `insertLine()` method.
      7. Deletes the dynamically allocated array of words to avoid memory leaks.

2. **`getMasterList()`**:
   - Returns the `MasterLinkedList` containing the organized data from the file.

## Usage Example

```cpp
#include "LinkedListProcessor.h" // Ensure the path to `LinkedListProcessor.h` is correct

int main() {
    LinkedListProcessor processor("path/to/file.extension");
    processor.processFile();
    MasterLinkedList masterList = processor.getMasterList();
    return 0;
}
```

## Dependencies
- **`FileReader`**: The `LinkedListProcessor` class relies on the `FileReader` class for reading files.
- **`LineLinkedList`**: The `LinkedListProcessor` class uses the `LineLinkedList` class to organize lines of text.
- **`MasterLinkedList`**: The `LinkedListProcessor` class using the `MasterLinkedList` class to manage linked lists of lines.

## Frequently Asked Questions (FAQs)

- How does the `processFile()` function work?
  - The `processFile()` function reads the content of the file, extracts words from each line, and stores them in corresponding `LineLinkedList` objects. It then inserts these `LineLinkedList` objects into a `MasterLinkedList`, organizing the file content into a hierarchical structure.

- Inside the `processFile` method, why do not use a `vector` insted the `pointer dynamic array`:
  - When the size is known and fixed, and the need is only for a basic array-like functionality, using a static array (`LineLinkedList* lineListArray = new LineLinkedList[size];`) may be more efficient in terms of both space and time complexity compared to using a vector (`vector<LineLinkedList> lineList;`). Static arrays have `O(1)` access time and allocate only the necessary space, while vectors have additional overhead for capacity management and resizing.

- What is `#pragma once` at the head of the file?
  - `#pragma once` is a preprocessor directive that ensures a header file is included only once during compilation. It serves the same purpose as traditional include guards (`#ifndef`, `#define`, `#endif`), but with fewer lines of code and improved compile speed. It helps prevent issues like [circular dependencies](https://en.wikipedia.org/wiki/Circular_dependency#:~:text=In%20software%20engineering%2C%20a%20circular,also%20known%20as%20mutually%20recursive.) and reduces the likelihood of [name clashes](https://codepal.ai/error-message-explainer/query/atlCEDvx/naming-conflict-in-cpp-code#:~:text=When%20the%20same%20name%20is,number%3B%20in%20the%20code%20snippet.).