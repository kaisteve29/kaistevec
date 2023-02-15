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
 Node* insertMiddleNode(Node* head,int value,int pos){
 	Node* curr= head;
 	Node* temp= createNode(value);
 	if(head==NULL){
 		head= temp;
	 }
	 if(pos==1){
	 	temp->next=head;
	 	head=temp;
	 }
 	int a=1;
 	Node* prev= NULL;
 	while(a!=pos){
 		prev=curr;
 		curr=curr->next;
 		a++;
	 }
	 prev->next=temp;
	 temp->next=curr;
	 

return head;
 }
 int main(){
	Node* head= createNode(29);
	head->next=createNode(07);
	head->next->next=createNode(2001);
	Node* newHead=insertMiddleNode(head,21,3);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
