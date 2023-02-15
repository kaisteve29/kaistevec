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
	if(head==NULL) return true;
	Node* curr= head;
	while(curr && curr->next!= head){
		curr= curr->next;
	}
	if(curr->next== head) return true;
	return false;
}

int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	Node* last= createNode(5);
	head->next->next->next->next=last;
	last->next= head;
	if(isCircle(head)){
		cout<< "true"<< endl;
	}
	else{
		cout<< "false"<< endl;
	}
	return 0;
}
