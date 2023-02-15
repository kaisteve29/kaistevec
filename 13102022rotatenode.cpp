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

Node* rotateNode(Node* head,int k){
	int n=0;
	Node* temp= head;
	while(temp){
		n++;
		temp=temp->next;
	}
	int a= k%n;
	temp= head;
	Node* prev= NULL;
	while(a!=0){
		prev= temp;
		a--;
		temp=temp->next;
	}
	prev->next= NULL;
	Node* newHead= NULL;
	Node* curr=newHead;
	while(temp){
		Node* newNode= new Node();
	    newNode= temp;
		if(newHead==NULL){
			newHead=newNode;
			curr= newNode;
		}
		else{
			curr->next= newNode;
			curr= newNode;
		}	
	    temp=temp->next;	
	}
	curr->next= head;
	return newHead;
}
int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
    head->next->next->next= createNode(4);
    head->next->next->next->next= createNode(5);
    Node* newHead= rotateNode(head,3);
    while(newHead){
    	cout<< newHead->data<< " ";
    	newHead= newHead->next;
	}
	return 0;
}
