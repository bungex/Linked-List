#include <iostream>
#include "linkedlist.h"

using namespace std;

// This function creates a node
void LinkedList :: Insert(){
	
	int num;
	short int years;
	float salary;
	
	cout << "\nEnter Employee Number: "; cin >> num;
	cout << "Enter Number of years: "; cin >> years; 
	cout << "Enter Employee Salary: "; cin >> salary;
	
	// Creating a new node 
	Node *newnode = new Node();
	newnode->setNode(num, years, salary);
	newnode->setNext(NULL);				//assigning tail of the node to NULL
	
	// if list is empty first node (head) is equal to newnode and next is NULL
	if(head == NULL){
		head = newnode;
	}
	
	//Otherwise the newnode will be assign at the end 
	else{
		//creating temp node assigning head to it 
		Node *last = head;
		while(last->getNext() != NULL)			//finding last element of the list
			last = last->getNext();			    //then creating a new node 
		last->setNext(newnode);					// and adding element to the list
	}
}

// This function removes first element in the list
void LinkedList :: Remove(){
	
	// Checking if list isn't empty
	if(head != NULL){
		//creating a temp node
		Node *temp = head;
		head = head->getNext();				//goes to first element in the list
		delete temp;						//deleting first element
	}
	else{
		cout << "List is Empty" << endl;	
	}	
}

//This function calls subfuncion to print out the list
void LinkedList :: Display(){
	
	//checking if the list is empty
	if(head == NULL){
		cout << "\nList is Empty" << endl;
	}
	else{
		//if not calling print function
		cout << "\n\n";
		Print(head);
		cout << "End" << endl;
	}
}
	
	//This is recursive print function which prints the list backwards
	void LinkedList :: Print(Node *head){
		
		//when head next is null it will stop iterating 
		if (head != NULL){
			Print(head->getNext());
			head->getNode();					//Calling getter function which will print the elements 
    	}
	}

//This function clears the whole list	
void LinkedList :: Clear(){
	
	//temp node
	Node *temp = head;
	
	//it will iterate untill there isn't any contentes left
	while(head != NULL){
		temp = head->getNext();
		delete temp;
		head = temp;
	}
}
