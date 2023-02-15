#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void removeDuplicatedElement(Node* head){
	int n=0;
	Node* temp= head;
	while( temp != NULL){
		n++;
		temp= temp->next;
	}
	int arr[n];
	int a=0;
	temp = head;
	while(temp != NULL){
		arr[a]= temp->data;
		temp=temp->next;
		a++;
	}
	int max= arr[0];
	int min= arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int count[max-min+1];
	for(int i=0;i<max-min+1;i++){
		count[i]=0;
	}
	for(int i=0;i<n;i++){
		count[arr[i]-min]++;
	}
	 Node* newHead= new Node();
    newHead->data= min;
    Node* curr= newHead;
	for(int i=1;i<max-min+1;i++){
	    if(count[i]>0){
	    Node* newNode= new Node();
	    newNode->data=i+min;
	    curr->next= newNode;
	    curr= newNode;
	}
    
	}
	curr= newHead;
	while(newHead != NULL){
		cout<< newHead->data <<" ";
		newHead= newHead->next;
	}
}
int main(){
  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();
  Node* fourth = new Node();
  Node* fiveth = new Node();
  Node* sixth = new Node();
  Node* seventh = new Node();

  head-> data=2;
  head-> next=second;

  second-> data=2;
  second-> next=third;

  third-> data=4;
  third-> next=fourth;

  fourth-> data=4;
  fourth-> next=fiveth;

  fiveth-> data=5;
  fiveth-> next=sixth;

  sixth-> data=6;
  sixth-> next=seventh;

  seventh-> data=2;
  seventh-> next=NULL;

  removeDuplicatedElement(head);
  return 0;
}
