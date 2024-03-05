#pragma once
#include<iostream>
#include "../LineLinkedList/LineLinkedList.h"
#include "../MasterLinkedList/MasterLinkedList.h"
using namespace std;
class menu{
    public:
    void displayMenu(){
    LinkedListProcessor processor("assets/data.txt");
    processor.processFile();
    MasterLinkedList masterList = processor.getMasterList();

       // MasterLinkedList masterList;
        LineLinkedList lineLinked;
        int num_oper;
        int indx;
        string word;

        do{
        
        cout<<"1- For display the file\n";
        cout<<"2- For display specific line\n";
        cout<<"3- For display number of line in the file\n";
        cout<<"4- For display number of letter in the file\n";
        cout<<"5- For display number of letter in specific line\n";
        cout<<"6- For search for word in the file\n";
        cout<<"7- For exit\n";
        cout<<"Enter number of operation :";
        cin>>num_oper;
        cout<<"\n======================================================\n\n";

        switch (num_oper)
        {
        case 1:
        masterList.display();
        break;

        case 2:{
        cout<<"Enter number of line :";
        cin>>indx;
        masterList.displayByLineIndex(indx);
        }
        break;

        case 3:
        cout<<"\nThe number of line is :";
        cout<<masterList.getLinesCount()<<endl;
        break;

        case 4:
        cout<<"\nThe number of letter is :";
        cout<<masterList.getLettersCount()<<"\n";
        break;

        case 5:{
        cout<<"Enter number of line :";
        cin>>indx;
        cout<<"\nThe number of letter is :";
        cout<<masterList.getLettersCountByWordIndex(indx);
        cout<<endl;
        }
        break;

        case 6:
        cout<<"Enter the word you want to search :";
        cin>>word;
        masterList.searchByWord(word);
        break;

        case 7:
         cout << "Program End";
        exit(0);
       
        default:
            break;
        }
        }while(num_oper>0&&num_oper<8);
    }

    
};