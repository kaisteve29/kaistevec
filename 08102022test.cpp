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
	return newNode;
}
Node* reverseNode(Node* head){
	Node* temp= head;
	Node* newHead= NULL;
	while(temp){
		Node* newNode= new Node();
		newNode->data= temp->data;
		newNode->next= newHead;
		newHead= newNode;
		temp=temp->next;
	}
	return newHead;
}
int printNumberNode(Node* head){
	int n=0;
	Node* temp= head;
	while(temp){
		n=n*10+ temp->data;
		temp=temp->next;
	}
	return n;
}
Node* makeNum(int n){
	Node* newHead=NULL;
	Node* curr= newHead;
	while(n/10 !=0){
		Node* newNode= new Node();
		newNode->data= n%10;
		newNode->next=NULL;
		if(newHead==NULL){
			newHead= newNode;
			curr= newNode;
		}
		else{
			curr->next= newNode;
			curr= newNode;
		}
		n/=10;
	}
	curr= newHead;
	while(curr->next){
		curr=curr->next;
	}
	Node* last= new Node();
	last->data=n;
	last->next=NULL;
	curr->next= last;
	return newHead;
}
int main(){
	Node* head1= createNode(2);
	head1->next= createNode(4);
	head1->next->next= createNode(3);
	
	Node* head2= createNode(5);
	head2->next= createNode(6);
	head2->next->next= createNode(4);
	
    Node* newHead1= reverseNode(head1);
	Node* newHead2= reverseNode(head2);
	int n1= printNumberNode(newHead1);
	int n2= printNumberNode(newHead2);
	int n= n1+ n2;
	cout<< n << endl;
	Node* newHead= makeNum(n);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
