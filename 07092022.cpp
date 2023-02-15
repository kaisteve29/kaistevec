
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
/*
int main(){
    Node* head= new Node();
    head->data= 3;
    head->next= NULL;
    Node* curr= head;
    curr->data= 2;
    cout<< head->data << endl;
    Node* prev= NULL;
    prev= curr;
    prev->data= 29;
    cout << head->data << endl;
    cout << curr->data << endl;
    return 0;
}
*/
/*
int main(){
	Node* head= new Node();
	Node* second= new Node();
	Node* third= new Node();
	Node* fourth= new Node();
	head->data= 1;
	head->next= second;
	second->data= 2;
	second->next= third;
	third->data= 3;
	third->next= fourth;
	fourth->data= 4;
	fourth->next= NULL;
    second->next=fourth;
    delete third;
    while(head){
    	cout<< head->data << " ";
    	head= head->next;
	}
	return 0;
}
*/
int main(){
	Node* head= new Node();
	Node* second= new Node();
	Node* third= new Node();
	Node* fourth= new Node();
	head->data= 1;
	head->next= second;
	second->data= 2;
	second->next= third;
	third->data= 3;
	third->next= fourth;
	fourth->data= 4;
	fourth->next= NULL;
	head= head->next;
	while(head){
		cout << head->data << " ";
		head= head->next;
	}
	return 0;
}

