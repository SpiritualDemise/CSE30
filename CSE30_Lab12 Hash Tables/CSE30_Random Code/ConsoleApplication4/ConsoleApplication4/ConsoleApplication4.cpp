// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#ifndef RevNode_h
#define RevNode_h

// Define the Node struct below
struct Node {
	int data;
	Node* Next;
	Node* prev;
	};


// Define the append function below
Node* append(Node *p, int b) {


	Node* a = new Node();
	a->data = b;
	a->Next = NULL;

	Node* temp = p;

	while (temp->Next != NULL) {
		temp = temp->Next;
	}

	temp->Next = a;
	a->prev = temp;
	return a;

}



// Do not write any code below this line
#endif

int main()
{
    return 0;
}

