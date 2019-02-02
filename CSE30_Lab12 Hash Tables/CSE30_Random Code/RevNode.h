#ifndef RevNode_h
#define RevNode_h

// Define the Node struct below
struct Node {
	int data;
	Node* next;
	Node* prev;
	};


// Define the append function below
Node* append(Node *p, int b) {


	Node* a = new Node();
	a->data = b;
	a->next = NULL;

	Node* temp = p;

	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = a;
	a->prev = temp;
	return a;

}



// Do not write any code below this line
#endif