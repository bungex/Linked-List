/*
Name: Mueen Bunglawala
Due Date: 03/12/2021
Name: Project 3
Course: CIS 260
Description: This program creates linked list to store/manage data.
*/

#include <iostream>
#include <cstdlib>
#include "linkedlist.h"

using namespace std;

// Prototype
void menu(LinkedList &);

int main() {
	
	// Creating an object for linked list class
	LinkedList obj;
	menu(obj);
	
	return 0;
}

// This function presents user with different options to choose from
void menu(LinkedList & obj){
	
	char option;
	
	// This while loop will go on untill user enters 'e'
	while (option != 'E'){
        cout << "\n\tMain Menu" << endl;
		cout << "\t Options" << endl;
        cout << "\n[I]Insert Employee" << endl;
        cout << "[R]Remove Employee" << endl;
        cout << "[D]Display List" << endl;
        cout << "[C]Clear List" << endl;
        cout << "[E]Exit" << endl;
        cout << "\nWhat Would You Like to Do: "; cin >> option;
        option = toupper(option);						//converting user's input to upper case
        cin.ignore();
        
        //Functions call based on users answer
        if (option == 'I'){
        	obj.Insert();
		}
		else if(option == 'R'){
			obj.Remove();
		}
		else if(option == 'D'){
			obj.Display();
		}
		else if(option == 'C'){
			obj.Clear();
		}
	}
	system("pause");
}
	

