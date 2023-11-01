// Pepper Berry
// Date: 10/30/2023
// FancyList.cpp
// Purpose: class implementation

#include <iostream>
#include "FancyList.h"
using namespace std;

void NumberList::reverse(int size){
    int times = (size-1);
    for(int i =0; i < size;++i){//makes sure it reverses the whole list

        ListNode * newNode = nullptr;
        ListNode * curr = nullptr;
        ListNode * prev = nullptr;

        curr = head->next;//deletes the head
        int move = head->value;//saves head value
        delete head;
        head = curr;

        newNode = new ListNode;//creates new node for the head
        newNode -> value = move;
        newNode->next = nullptr;
        for (int i = 0; i < times; ++i){
            prev = curr;
            curr = curr-> next;

        }
        times -= 1;

        if (prev == nullptr){
            head = newNode;
            newNode ->next = curr;
        }else{
            prev->next = newNode;
            newNode -> next = curr;
        }
    }


}

int NumberList::listSize(){//gets the size of the list
    ListNode * curr = head;
    int size = 0;
    while(curr){
        ++size;
        curr = curr-> next;

    }

    return size;
}

void NumberList::deleteNum(int n, int size){//deletes a node in the list
    ListNode * curr = nullptr;
    int currNum = size;
    ListNode * prev = nullptr;
    if(!head){
        return;
    }else if(n == (size)){
        curr = head->next;
        delete head;
        head = curr;
    }else{
        curr = head;
        while(currNum != n && curr != nullptr ){
            prev = curr;
            curr = curr->next;
            --currNum;
        }
        if(currNum == n){
            prev->next = curr->next;
            delete curr;
        }else{
            cout <<"Oops you might have made a mistake, that doesn't exist in this linked list"<<endl;
        }
    }


}

void NumberList::printList(){//prints the linked list
    ListNode * curr = nullptr;
    curr = head;
    while(curr){
        cout << curr->value << " ";
        curr = curr-> next;
    }
    cout <<endl;

}

void NumberList::insert(int num){//insert any typed integer number into the list of an OrderedList instance
    ListNode * newNode = nullptr;
    ListNode * curr = nullptr;
    ListNode * prev = nullptr;

    newNode = new ListNode;
    newNode -> value = num;
    newNode->next = nullptr;

    if(!head){//is there a head if not make this the head
        head = newNode;
    }else{
        curr = head;

        while(curr != nullptr && curr->value <num){
            prev = curr;
            curr = curr -> next;
        }
        if (curr == head){
            newNode ->next = head;
            head = newNode;

        }else{
            prev->next = newNode;
            newNode -> next = curr;
        }

    }



}

NumberList::~NumberList(){//the destructor
    ListNode * nextNode = nullptr;
    ListNode * curr = head;
    cout <<"Deallocating..."<<endl;
    while(curr != nullptr){
        nextNode = curr->next;
        cout <<"Deleting "<<curr->value<<endl;
        delete curr;
        curr = nextNode;

    }
}
