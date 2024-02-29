#include <iostream>
#include <string>
#include "include/LinkedListProcessor/LinkedListProcessor.h"
using namespace std;

void br(int n = 2);

int main()
{
    cout << "Program Start";
    br();

    LinkedListProcessor processor("assets/data.txt");
    processor.processFile();
    MasterLinkedList masterList = processor.getMasterList();
    masterList.display();
    cout << endl << "Total lines: " << masterList.getLinesCount();

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