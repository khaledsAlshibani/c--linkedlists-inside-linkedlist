#include <iostream>
#include <string>
#include "include/LineLinkedList.h"
using namespace std;

void br(int n = 2);

int main()
{
    cout << endl << "Program Start";
    br();
    
    LineLinkedList Line1;
    Line1.insertWord("Hello");
    Line1.insertWord("lol");
    Line1.display();
    cout << "\nAll letters count is: " << Line1.getLettersCount() << endl;
    cout << "\nSingle word letters count is: " << Line1.getLettersCountByWordIndex(5) << endl;
    Line1.searchByWord("Hello");
    Line1.searchByWord("aa");

    br();
    cout << "Program End" << endl;
    return 0;
}

void br(int n) {
    for (int i = 0; i < n; i++) {
        cout << endl;
    }
}