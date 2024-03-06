# `FileReader` Class Overview
The `FileReader` class provides functionalities to read and manipulate text files.

## Class Members

- **`file`**: An input file stream used to read from the specified file.
- **`filePath`**: The path of the file that will be read.

## Constructor

- **`FileReader(const string &filePath)`**: Initializes the `FileReader` object with the specified file path. Attempts to open the file, and if opening failed, outputs an error message.

## Member Functions

1. **`resetFile()`**:
   - Resets the file stream to its initial state, clearing any internal flags or errors that may have been set during previous operations. This ensures that subsequent file operations start from the beginning of the file.

2. **`getLinesCount()`**:
   - Returns the total number of lines in the file.

3. **`displayLines()`**:
   - Displays all the lines in the file.

4. **`displayWords()`**:
   - Displays all the words in the file.

5. **`displayWordsByLine(int index)`**:
   - Displays the words in the specified line of the file.
   - Parameters:
     - `index`: The line number to display words from.

6. **`getWordsCountByLine(int key)`**:
   - Returns the total number of words in the specified line of the file.
   - Parameters:
     - `key`: The line number to count words from.

7. **`getWordsByLine(int key)`**:
   - Returns an array containing all the words in the specified line of the file.
   - Parameters:
     - `key`: The line number to retrieve words from.

## Destructor

- **`~FileReader()`**: Closes the file stream when the `FileReader` object is destroyed.

## Frequently Asked Questions (FAQs)

- Why is the `resetFile()` function used?
  - The `resetFile()` function resets the file stream to its initial state, ensuring subsequent file operations start from the beginning of the file. This is useful when there is a need to reprocess the file multiple times, avoiding unexpected behavior due to previous file operations.

- What are internal flags in the context of file operations?
  - Internal flags are signals or indicators maintained by the file stream to track the status of various file operations. For example, the `eofbit` flag is set when the end-of-file (EOF) is reached, while the `failbit` flag indicates a failure in an operation, such as attempting to read data from a closed file. The `resetFile()` function clears these internal flags, ensuring a clean state for subsequent file operations. [See this](https://stackoverflow.com/questions/45647977/clarification-regarding-use-of-flagbit-to-set-internal-error-flag).