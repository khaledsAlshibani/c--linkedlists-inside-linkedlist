#include <iostream>
#include <string>
#include "include/LineLinkedList.h"
#include "include/FileLinkedList.h"
using namespace std;

void br(int n = 2);

int main()
{
    cout << endl << "Program Start";
    br();

    FileLinkedList File;

    // 1st Object Instance
    LineLinkedList Line1;
    Line1.insertWord("Hello");
    Line1.insertWord("lol");
    File.insertLine(Line1);

    // 2nd Object Instance
    LineLinkedList Line2;
    Line2.insertWord("word1");
    Line2.insertWord("word2");
    cout << Line2.get();
    File.insertLine(Line2);

    File.display(); // why empty?

    br();
    cout << "Program End" << endl;
    return 0;
}

void br(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
    }
}