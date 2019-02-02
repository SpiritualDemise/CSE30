// Lab8BinaryTrees.cpp : Defines the entry point for the console application.
//


#include <iostream>

using namespace std;

struct Node {
	long data;
	Node* left;
	Node* right;
};

Node* insert(Node* root, long value) {

	Node* curr = new Node();


	 curr = root;

		while(curr != NULL){
		
			if (value < curr->data) {

				curr = curr->left;

			}
			else {

				curr = curr->right;

			}
		}
		
		return root;


}

void print(Node* root) {
	if (root != NULL) {
		print(root->left);
		cout << root->data << " ";
		print(root->right);
	}
}

int main(int argc, const char * argv[]) {

	Node* tree = NULL;
	tree = insert(tree, 5);
	tree = insert(tree, 3);
	tree = insert(tree, 8);
	tree = insert(tree, 1);
	tree = insert(tree, 6);
	tree = insert(tree, 4);
	tree = insert(tree, 7);

	print(tree);

	//Result should be: 1 3 4 5 6 7 8

	return 0;
}


