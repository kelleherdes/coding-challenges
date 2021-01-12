#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bst.h"

using namespace std;


//program to test functions to add nodes and print
int main(){
	//initialise random number generator
	srand(time(NULL));
	tree_node * root = NULL;
	//number of ints to generate
	const int N = 10;
	//array to hold random ints
	int numbers[N];
	for (int i = 0; i < N; i++){
		numbers[i] = rand() % N;
		root = insert_node(root, numbers[i]);
		cout << numbers[i] << " ";
	}
	cout << endl;
	print(root);
	cout << endl;
	return 0;
}
