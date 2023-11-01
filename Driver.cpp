// Pepper Berry
// Date: 10/30/2023
// hw3.cpp
// Purpose: The driver program
//demonastrates my knowledge of linked lists

#include <iostream>
#include "FancyList.h"
using namespace std;


void fancyListMenu(){
    bool run = true;
    int choice;
    NumberList a;
    while (run == true){

        int choice;
        cout <<"********* FancyList Menu *********"<< endl << "1. Create a list"<<endl;
        cout <<"2. Display the list"<< endl << "3. Reverse the list" << endl;
        cout <<"4. Delete the n-th node from the end of the list"<< endl << "5. Exit the program"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin >> choice;//i wish this could be a case switch but that kept giving me errors and this works so...
        if(choice == 1){//creates the list
            string element;
            bool xVar = false;
            while(xVar == false){
                cout<<"Type a number for insertion (type x to stop):";
                cin >> element;

                if (element == "x"){
                    xVar = true;
                }else{
                    a.insert(stoi(element));
                }

            }
            cout <<endl;
        }else if (choice == 2){//display list
            cout <<"Current list is: ";
            a.printList();
            cout <<endl;
        }else if (choice == 3){//reverse list
            int size = a.listSize();
            a.reverse(size);
            cout <<"Current list is: ";
            a.printList();
            cout <<endl;

        }else if (choice == 4){//delete a node
            int n = 0;
            cout <<"delete n-th node from the end of the list, your n is: ";
            cin >> n;
            int size = a.listSize();
            a.deleteNum(n, size);
            cout <<"Current list after deleting the "<<n<<"-th node from the end is: ";
            a.printList();
            cout <<endl;


        }else if (choice == 5){//exit
            run = false;

        }else{
            cout <<"Oops you might have made a mistake, that is not a real choice"<< endl<<endl;
        }
    }

}



int main() {
    fancyListMenu();
    return 0;
}
