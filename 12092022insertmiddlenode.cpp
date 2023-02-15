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

Node* insertMiddleNode(Node* head,int pos,int value){
	Node* temp= head;
	Node* newHead= createNode(value);
	if(head==NULL){
		head= newHead;
		return head;
	}
	int n=1;
	Node* prev= NULL;
	if(pos==1){
		newHead->next= head;
		head= newHead;
		return head;
	}
	while(n!=pos){
		prev= temp;
		temp=temp->next;
		n++;
	}
	prev->next= newHead;
	newHead->next=temp;
	return head;
}

int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(5);
	head->next->next->next->next=createNode(6);
	Node* newHead= insertMiddleNode(head,4,4);
	while(newHead){
		cout<< newHead->data << endl;
		newHead= newHead->next;
	}
	return 0;
}
