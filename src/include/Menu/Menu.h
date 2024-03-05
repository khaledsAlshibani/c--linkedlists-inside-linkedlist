#pragma once
#include <iostream>
#include "../LinkedListProcessor/LinkedListProcessor.h"
#include "../LineLinkedList/LineLinkedList.h"
#include "../MasterLinkedList/MasterLinkedList.h"
using namespace std;
class Menu
{
public:
    void displayMenu()
    {
        LinkedListProcessor processor("assets/data.txt");
        processor.processFile();
        MasterLinkedList masterList = processor.getMasterList();

        // MasterLinkedList masterList;
        LineLinkedList lineLinked;
        int num_oper;
        int indx;
        string word;

        do
        {
            cout << "1- For display the file content\n";
            cout << "2- For display a specific line by its number\n";
            cout << "3- For display the fill number of lines in the file\n";
            cout << "4- For display the full number of letters in the file\n";
            cout << "5- For display number of letters in a specific line\n";
            cout << "6- For search for a word in the file\n";
            cout << "7- For exit\n";
            cout << "Enter the operation number:";

            cin >> num_oper;

            cout << "\n======================================================\n\n";

            switch (num_oper)
            {
            case 1:
                masterList.display();
                break;

            case 2:
            {
                cout << "Enter number of line :";
                cin >> indx;
                masterList.displayByLineIndex(indx);
            }
            break;

            case 3:
                cout << masterList.getLinesCount() << endl;
                break;

            case 4:
                cout << masterList.getLettersCount() << "\n";
                break;

            case 5:
            {
                cout << "Enter number of line :";
                cin >> indx;
                cout << masterList.getLettersCountByWordIndex(indx);
                cout << endl;
            }
            break;

            case 6:
                cout << "Enter the word you want to search :";
                cin >> word;
                masterList.searchByWord(word);
                break;

            case 7:
                exit(0);

            default:
                break;
            }
        } while (num_oper > 0 && num_oper < 8);
    }
};