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
	Node* newHead1= NULL;
	Node* curr1=newHead1;
	Node* temp= head;
	while(temp){
		Node* newNode= new Node();
		newNode->data= temp->data;
		newNode->next= NULL;
		if(newHead1==NULL){
			newHead1= newNode;
			curr1=newNode;
		}
		else{
			curr1->next= newNode;
			curr1=newNode;
		}
		temp=temp->next;
	}
    while(newHead1){
    	cout<< newHead1->data << " ";
    	newHead1=newHead1->next;
	}
	cout<< endl;
	temp= head;
	Node* newHead2= NULL;
	Node* curr2= newHead2;
	while(temp){
		Node* newNode= new Node();
		newNode->data= temp->data;
		newNode->next= newHead2;
		newHead2=newNode;
		temp=temp->next;		
	}
	while(newHead2){
		cout<< newHead2->data << " ";
		newHead2=newHead2->next;
	}
	return 0;
}
