#include <iostream>
#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
	
	// Private data fields
	private:
		int EmpNum;
		short int NumYears;
		float EmpSalary;
		Node *next;					// Pointer to next Node
	
	public:
		
		//Setter function
		void setNode(int num, short int years, float salary){
			EmpNum = num;
			NumYears = years;
			EmpSalary = salary;
		}
		
		//Points to next node
		void setNext(Node* link){
			next = link;
		}
		
		//Constant getter function which gets the data and presents it to user
		void getNode() const{
				cout << "Number: " << EmpNum;
				cout << "\tYears: " << NumYears;
				cout << "\tSalary: " << EmpSalary << "\t";
		}	
		
		//Gets next node	
		Node *getNext(){
			return next;
		}
};

#endif
