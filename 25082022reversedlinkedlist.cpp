#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* createNode(int value){
	Node* newNode= new Node();
	newNode->data= value;
	newNode->next=NULL;
}

Node* reversedLinkList(Node*head){
	int n;
	Node* temp= head;
	while(temp){
		n++;
		temp= temp->next;
	}
	int arr[n];
	temp= head;
	int a=0;
	while(temp){
		arr[a]= temp->data;
		a++;
		temp= temp->next;
	}
	Node* newHead= new Node();
	newHead->data= arr[n-1];
	Node* curr= newHead;
	for(int i=n-2;i>=0;i--){
		Node* newNode= new Node();
		newNode->data= arr[i];
		curr->next= newNode;
		curr= curr->next;
	}
	curr= newHead;
	return newHead;
}

int main(){
	Node* head= createNode(1);
	head->next=createNode(2);
	head->next->next=createNode(3);
	head->next->next->next=createNode(4);
	head->next->next->next->next=createNode(5);
	Node* newHead= reversedLinkList(head);
	while(newHead){
		cout << newHead->data<< " ";
		newHead= newHead->next;
	}
	return 0;
}
