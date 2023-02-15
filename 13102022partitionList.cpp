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

Node* partitionList(Node* head,int n){
	Node* temp= head;
	Node* head1=NULL;
	Node* curr1= head1;
	Node* head2= NULL;
	Node* curr2= head2;
	while(temp){
		if(temp->data < n){
			Node* newNode= new Node();
			newNode->data= temp->data;			
			newNode->next= NULL;
			if(head1==NULL){
				head1= newNode;
				curr1= newNode;
			}
			else{
				curr1->next= newNode;
				curr1= newNode;
			}
		}
		if(temp->data >= n){
			Node* newNode= new Node();
			newNode->data= temp->data;
			newNode->next= NULL;
			if(head2==NULL){
				head2= newNode;
				curr2= newNode;
			}
			else{
				curr2->next= newNode;
				curr2= newNode;
			}
		}
		temp=temp->next;
	}
	Node* temp1= head1;
	while(temp1->next){
		temp1= temp1->next;
	}
	temp1->next= head2;
	return head1;
}
int main(){
	Node* head= createNode(1);
	head->next= createNode(4);
	head->next->next= createNode(3);
	head->next->next->next= createNode(2);
	head->next->next->next->next= createNode(5);
	head->next->next->next->next->next= createNode(2);
	Node* newHead= partitionList(head,3);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
