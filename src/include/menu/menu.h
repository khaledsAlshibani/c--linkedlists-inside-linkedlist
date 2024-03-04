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
        cout<<masterList.getLinesCount()<<endl;
        break;

        case 4:
        cout<<lineLinked.getLettersCount()<<"\n";
        break;

        case 5:{
        cout<<"Enter number of line :";
        cin>>indx;
        cout<<lineLinked.getLettersCountByWordIndex(indx);
        }
        break;

        case 6:
        cout<<"Enter the word you want to search :";
        cin>>word;
        lineLinked.searchByWord(word);
        break;

        case 7:
        exit(0);
       
        default:
            break;
        }
        }while(num_oper>0&&num_oper<8);
    }

    // void creatFile(){
    // LinkedListProcessor processor("assets/data.txt");
    // processor.processFile();
    // MasterLinkedList masterList = processor.getMasterList();
    // }
    
};