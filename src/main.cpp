#include <iostream>
#include <string>
#include "include/LineLinkedList.h"
#include "include/FileLinkedList.h"
using namespace std;

void br(int n = 2);

int main()
{
    cout << "Program Start";
    br();

    FileLinkedList File;

    // 1st Object Instance
    LineLinkedList Line1;
    Line1.insertWord("Hello");
    Line1.insertWord("lol");
    string *words1 = Line1.get();
    int wordCount1 = Line1.getWordsCount();
    File.insertLine(words1, wordCount1);

    // 2nd Object Instance
    LineLinkedList Line2;
    Line2.insertWord("word1");
    Line2.insertWord("word2");
    Line2.insertWord("word3");
    Line2.insertWord("word4");
    string *words2 = Line2.get();
    int wordCount2 = Line2.getWordsCount();
    File.insertLine(words2, wordCount2);

    File.display();
    File.displayByLineIndex(2);

    br();
    cout << "Program End";
    return 0;
}

void br(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
    }
}