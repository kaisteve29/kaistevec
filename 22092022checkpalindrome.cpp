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

bool checkPalindrome(Node* head){
	Node* curr= head;
	Node* newHead= NULL;
	while(curr){
		Node* newNode= new Node();
		newNode->data= curr->data;
		newNode->next=newHead;
		newHead=newNode;
		curr=curr->next;
	}
	curr=head;
	while(curr->next){
		if(newHead->data != curr->data) return false;
		newHead=newHead->next;
		curr=curr->next;
	}
return true;

}
int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next=createNode(3);
	head->next->next->next=createNode(2);
	head->next->next->next->next=createNode(1);
	if(checkPalindrome(head)){
		cout<< "TRUE"<< endl;
	}
	else{
		cout<<"FALSE"<< endl;
	}
	return 0;
}
