#pragma once
#include <iostream>
#include "../LinkedListProcessor/LinkedListProcessor.h"
#include "../LineLinkedList/LineLinkedList.h"
#include "../MasterLinkedList/MasterLinkedList.h"
using namespace std;
class Menu
{
    int operationNumber;

    void displayOptions()
    {
        cout << "1- Display file content\n";
        cout << "2- Display a specific line by its number\n";
        cout << "3- Display the total number of lines in the file\n";
        cout << "4- Display the total number of letters in the file\n";
        cout << "5- Display number of letters in a specific line\n";
        cout << "6- Search for a word in the file\n";
        cout << "7- Search a specific word in a specific line\n";
        cout << "8- Exit\n";
        cout << "Choose an operation number: ";
    }
    
    int getUserChoice()
    {
        cin >> operationNumber;
        return operationNumber;
    }

public:
    void processMenu()
    {
        LinkedListProcessor processor("assets/data.txt");
        processor.processFile();
        MasterLinkedList masterList = processor.getMasterList();

        LineLinkedList lineLinked;
        int operationNumber;
        int index;
        string word;

        do
        {
            displayOptions();
            operationNumber = getUserChoice();

            cout << "\n======================================================\n\n";

            switch (operationNumber)
            {
            case 1:
                masterList.display();
                break;

            case 2:
            {
                cout << "Enter number of line :";
                cin >> index;
                masterList.displayByLineIndex(index);
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
                cin >> index;
                cout << masterList.getLettersCountByWordIndex(index);
                cout << endl;
            }
            break;

            case 6:
                cout << "Enter the word you want to search :";
                cin >> word;
                masterList.searchByWord(word);
                break;

            case 7:
            {
                cout << "Enter line :";
                cin >> index;
                cout << endl;
                cout << "Enter number of word :";
                int num_word;
                cin >> num_word;
                masterList.searchByWordAndLine(index, num_word);
            }
            break;

            case 8:
                cout << "End of progrm \n";
                exit(0);
                

            default:
                cout<<"\nWrong operation number\n";
                break;
            }
        } while (operationNumber > 0 && operationNumber < 9);
    }
};