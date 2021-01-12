#include <iostream>
#include "bst.h"
using namespace std;

tree_node::tree_node(int value){
	left = NULL;
	right = NULL;
	this->value = value;
}

tree_node * insert_node(tree_node * root, int value){
	tree_node * new_node = new tree_node(value), *current;
	if(root == NULL){
		//node becomes root if tree is empty
		root = new_node;
		return root;
	}		
	
	current = root;
	//search tree until appropriate place is found for new node
	while(1){
		if(value < current->value){
			if(current->left == NULL){
				current->left = new_node;
				return root;
			}
			current = current->left;
		}
		else{
			if(current->right == NULL){
				current->right = new_node;
				return root;
			}
			current = current->right;
		}
	}

}

void print(tree_node * root){
	//use recursion to print tree
	if(root == NULL)
		return;
	print(root->left);
	cout << root->value << " ";
	print(root->right);
}

