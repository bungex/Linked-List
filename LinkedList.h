#include <iostream>
#include "Node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// This class inherits contents of Node class
class LinkedList{
	
	Node *head;
	
	public:
		//Member functions
		void Insert();
		void Remove();
		void Display();
			void Print(Node*);
		void Clear();
	
};

#endif
