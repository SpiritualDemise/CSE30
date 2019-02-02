// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#ifndef Node_h
#define Node_h

// Define the Node struct below
struct Node {
	int data;
	Node* next;
	};


//Define the append function below
void append(Node* p, int a) {

	Node* k = new Node();
	k->data = a;
	k->next = NULL;
	Node* temp = p;

	while (temp->next != NULL) {

		temp = temp->next;

	}

	temp->next = k;

}


// Do not write any code below this line
#endif

int main()
{
    return 0;
}

