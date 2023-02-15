#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

int main(){
	Node* head= new Node();
	Node* second= new Node();
	head->data=1;
	head->next= second;
	
	second->data=2;
	second->next=NULL;
	
	Node* temp=head;
	
	while(temp!=0){
		cout<<temp->data<< " ";
		temp=temp->next;
	}
	Node* curr= new Node();
	int arr[3]={4,5,6};
for(int i=2;i>=0;i--){
    Node *newNode = new Node();
    newNode->data = arr[i];
    curr->next = newNode;
    curr = newNode;
    cout<< curr->next->data << endl;
}
  
  while(curr!=NULL){
  	cout<<curr->data<<" ";
  	curr=curr->next;
  }
	return 0;
}
