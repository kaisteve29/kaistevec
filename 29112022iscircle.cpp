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

bool isCircle(Node* head){
	Node* temp= head;
	while(temp && temp->next!= head){
		temp=temp->next;
	}
	if(temp== NULL){
		return false;
	}
	else return true;
}
int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	Node* last= createNode(5);
	head->next->next->next->next= last;
	last->next= head;
	if(isCircle(head)==true){
		cout << "true";
	}
	else{
		cout << "false";
	}
	return 0;
}
