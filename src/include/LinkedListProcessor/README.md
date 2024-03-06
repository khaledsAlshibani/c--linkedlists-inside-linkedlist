# `LinkedListProcessor` Class Overview
The purpose of the `LinkedListProcessor` class is to process text files by inserting each line from the file into dynamically generated line-linked-lists.

## Class Members

- **`filePath`**: The path of the file.
- **`fileReader`**: An instance of the `FileReader` class which job is to read the specified file.
- **`masterList`**: An instance of the `MasterLinkedList` class for inserting lines-linked-lists.

## Constructors

- **`LinkedListProcessor()`**: a default constructor with the default file path "../assets/data.txt" and creates an instance of the `FileReader`.
- **`LinkedListProcessor(const string &filePath)`**: Initializes a `LinkedListProcessor` object with the provided file path and creates an instance of the `FileReader`.

## Member Functions

1. **`processFile()`**:
   - Reads the file and puts each line into a list.
   - If a line is empty, it skips it.
   - After reading, it organizes the lines in a master list.

2. **`getMasterList()`**:
   - Returns the `MasterLinkedList` containing the data from the processed file.

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
  - When the size is known and fixed, and the need is only for a basic array functionality, using a static array (`LineLinkedList* lineListArray = new LineLinkedList[size];`) may be more efficient for both space and time complexity compared to using a vector (`vector<LineLinkedList> lineList;`). Static arrays have `O(1)` access time and allocate only the necessary space, while vectors have additional overhead for capacity management and resizing.