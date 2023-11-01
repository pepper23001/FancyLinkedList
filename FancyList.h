// Pepper Berry
// Date: 10/30/2023
// FancyList.h
// Purpose:class declaration/ header file

#include ing>
using namespace std;

#ifndef FANCYLIST_H
#define FANCYLIST_H

class NumberList{
    private:
        struct ListNode{
            double value;
            ListNode * next;
        };
        ListNode * head;
    public:
        NumberList(){head = nullptr;}
        void printList();
        void insert(int num);
        ~NumberList();
        void deleteNum(int num,int size);
        int listSize();
        void reverse(int size);
};


#endif
