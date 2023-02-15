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

Node* mergeTwoList(Node* head1,Node* head2){
	Node* curr1= head1;
	Node* curr2=head2;
	Node* newHead= NULL;
	Node* curr= newHead;
	while(curr1 || curr2){
		if(curr1==NULL){
			Node* newNode= new Node();
			newNode->data= curr2->data;
			newNode->next= NULL;
			if(newHead==NULL){
				newHead= newNode;
				curr=newNode;
			}
			else{
				curr->next= newNode;
				curr=newNode;
			}
			if(curr2==NULL){
					Node* newNode= new Node();
			newNode->data= curr1->data;
			newNode->next= NULL;
			if(newHead==NULL){
				newHead= newNode;
				curr=newNode;
			}
			else{
				curr->next= newNode;
				curr=newNode;
			}
			}
		}
		if(curr1->data <= curr2->data){
			Node* newNode= new Node();
			newNode->data= curr1->data;
			newNode->next= NULL;
			if(newHead==NULL){
				newHead= newNode;
				curr=newNode;
			}
			else{
				curr->next= newNode;
				curr=newNode;
			}
			curr1=curr1->next;
		}
		if(curr1->data >= curr2->data){
			Node* newNode= new Node();
			newNode->data= curr2->data;
			newNode->next= NULL;
			if(newHead==NULL){
				newHead= newNode;
				curr=newNode;
			}
			else{
				curr->next= newNode;
				curr=newNode;
			}
			curr2=curr2->next;
		}
	}
	return newHead;
}

int main(){
	Node* head1= createNode(1);
	head1->next= createNode(2);
	head1->next->next= createNode(3);

	
	Node* head2= createNode(1);
	head2->next= createNode(4);
	head2->next->next= createNode(5);
	Node* newHead= mergeTwoList(head1,head2);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
}
