#include <iostream>
#include <string>
#include "include/LineLinkedList.h"
#include "include/MasterLinkedList.h"
#include "include/FileReader.h"
using namespace std;

void br(int n = 2);

int main()
{
    cout << "Program Start";
    br();

    MasterLinkedList Master;
    FileReader File("assets/data.txt");

    LineLinkedList Line1;
    string *Line1Words = File.getWordsByLine(1);
    int Line1WordsCount = File.getWordsCountByLine(1);
    File.resetFile();
    cout << Line1Words;
    cout << Line1WordsCount;
    Line1.insertMultipleWords(Line1Words, Line1WordsCount);
    Line1.display();

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