#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* createNode(int value){
	Node* newNode= new Node();
	newNode->data = value;
	newNode->next= NULL;
	return newNode;
}

Node* oddEvenList(Node* head){
	Node* evenHead= NULL;
	Node* oddHead= NULL;
	Node* evenCurr= evenHead;
	Node* oddCurr= oddHead;
	Node* curr= head;
	int a=1;
	while(curr){
		Node* newNode= new Node();
		newNode->data= curr->data;
		newNode->next= NULL;
		if(a%2==1){
			if(evenHead==NULL){
				evenHead= newNode;
				evenCurr= newNode;
			}
			else{
				evenCurr->next= newNode;
				evenCurr= newNode;
			}
		}
		else{
			if(oddHead==NULL){
				oddHead= newNode;
				oddCurr= newNode;
			}
			else{
				oddCurr->next= newNode;
				oddCurr= newNode;
			}
		}
		a++;
		curr= curr->next;
	}
	Node* last= evenHead;
	while(last->next){
		last= last->next;
	}
	last->next= oddHead;
	return evenHead;
}
int main(){
	Node* head= createNode(2);
	head->next= createNode(1);
	head->next->next= createNode(3);
	head->next->next->next= createNode(5);
	head->next->next->next->next= createNode(6);
	head->next->next->next->next->next= createNode(4);
	head->next->next->next->next->next->next= createNode(7);
	Node* newHead= oddEvenList(head);
	while(newHead){
		cout<< newHead->data<< " ";
		newHead= newHead->next;
	}
	return 0;
}
