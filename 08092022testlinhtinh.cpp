#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

int main(){
	Node* head= new Node();
	Node* second= new Node();
	Node* third= new Node();
	
	head->data= 1;
	head->next= second;
	
	second->data= 2;
	second->next=third;
	
	third->data= 3;
	third->next= NULL;
	 while(head){
    	cout<< head->data << " ";
    	head= head->next;
	}
	cout<< endl;
    Node* newHead= NULL;
    second->next= newHead;
    newHead= second;
    cout<< newHead->data << endl;
    while(head){
    	cout<< head->data << " ";
    	head= head->next;
	}
	return 0;
}

