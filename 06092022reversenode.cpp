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

Node* reverseNode(Node* head){
	int n=0;
	Node* temp= head;
	while(temp){
		n+=1;
		temp=temp->next;
	}
    int arr[n];
    temp=head;
    int a=0;
    while(temp){
    	arr[a]=temp->data;
    	a+=1;
    	temp= temp->next;
	}
	Node* newHead= new Node();
	newHead->data= arr[n-1];
	Node* curr= newHead;
	for(int i=n-2;i>=0;i--){
		Node* newNode= new Node();
		newNode->data= arr[i];
		curr->next=newNode;
		curr=curr->next;
	}
	return newHead;
} 
int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	Node* newHead= reverseNode(head);
	while(newHead){
		cout<< newHead->data<< " ";
		newHead= newHead->next;
	}
	return 0;
}
