#include <iostream>
#include <string>
#include "include/LineLinkedList.h"
#include "include/FileLinkedList.h"
#include "include/ReadingFile.h"
using namespace std;

void br(int n = 2);

int main()
{
    cout << "Program Start";
    br();

    string filePath = "assets/data.txt";
    ReadingFile TheFile(filePath);
    TheFile.displayFileByLines();

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