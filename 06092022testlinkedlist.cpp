#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* createNode(int value){
	Node* newNode= new Node();
	newNode->data= value;
	newNode->next= NULL;
	return newNode;
}

int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	head->next->next->next->next= createNode(5);
	head= head->next;
	while(head){
		cout<< head->data<<" ";
		head= head->next;
	}
	return 0;
}
