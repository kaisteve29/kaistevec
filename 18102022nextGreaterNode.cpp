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

Node* nextGreaterNode(Node* head){
	Node* temp= head;
	Node* newHead=NULL;
	Node* curr= newHead;
	int a= temp->data;
	int count=1;
	while(temp->next){	
	  if(a < temp->next->data){
	  	a= temp->next->data;
	  	while(count){
	  	Node* newNode= new Node();
	  	newNode->data= a;
	  	newNode->next= NULL;
	  	if(newHead==NULL){
	  		newHead= newNode;
	  		curr= newNode;
		  }
		  else{
		  	curr->next= newNode;
		  	curr=newNode;
		  }
		  count--;
	  }
	  }
	  else{
	  	count++;
	  }
	  temp=temp->next;
	}
	return newHead;
}

int main(){
	Node* head= createNode(2);
	head->next= createNode(3);
	head->next->next= createNode(4);
	head->next->next->next= createNode(7);
	head->next->next->next->next= createNode(5);
	
	Node* newHead= nextGreaterNode(head);
	while(newHead){
		cout<< newHead->data<< " ";
		newHead= newHead->next;
	}
	return 0;
}
