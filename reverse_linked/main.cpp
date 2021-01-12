#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class node{
	public:
		node * next;
		int val;
};

node * add_node(node * tail, int value){
	if(tail->next != NULL){
		cout << "Error, next node is not null\n";
		return NULL;
		}
	tail->next = new node;
	tail = tail->next;
	tail->next = NULL;
	tail->val = value;
	return tail;

}

node * reverse(node * head){
	stack <node *> s;
	node * c = head;
	while(c != NULL){
		s.push(c);
		c = c->next;
	}
	head = s.top();
	s.pop();
	c = head;
	while(!s.empty()){
		c->next = s.top();
		c = c->next;	
		s.pop();
	}
	c->next = NULL;
	return head;
}
	

void print_list(node * head){
	node * c = head;
	for (int i = 0; i < 12; i++){
		cout << c->val << " ";
		c = c->next;
	}
	cout << endl;
}


int main(){
	node * head = new node;
	node * tail = head, *temp;
	//add elements to list
	for (int i = 0; i < 10; i++){
		tail = add_node(tail, i);
		}
	//remove original head
	temp = head;
	head = head->next;
	delete temp;
	//reverse list and print
	
	head = reverse(head);
	print_list(head);
	
	
	return 0;
}

