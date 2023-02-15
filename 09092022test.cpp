#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

int main(){
	Node* head= new Node();
	Node* newHead= NULL;
	head->data=8;
	head->next= newHead;
	
	newHead->data= 9;
	newHead=head;
	cout << newHead->data << endl;
	cout<< head->next->data<< endl;
	return 0;
}
