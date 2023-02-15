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

Node* sortNode(Node* head){
	int n=0;
	Node* temp= head;
	while(temp){
		n++;
		temp= temp->next;
	}
	int arr[n];
	int a=0;
	temp= head;
	while(temp){
		arr[a]= temp->data;
		a++;
		temp= temp->next;
	}
	int max= arr[0];
	int min= arr[0];
	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max= arr[i];
		}
		if(min>arr[i]){
			min= arr[i];
		}
	}
	int count[max-min+1];
	for(int i=0;i< max-min+1;i++){
		count[i]=0;
	}
	for(int i=0;i<n;i++){
		count[arr[i]-min]++;
	}
	for(int i=0;i<max-min;i++){
		count[i+1]+= count[i];
	}
	int amount[n];
	for(int i=0;i<n;i++){
		amount[count[arr[i]-min]-1]=arr[i];
		count[arr[i]-min]++;
	}
	Node* newHead= NULL;
	Node* curr= newHead;
	for(int i=0;i<n;i++){
		Node* newNode= new Node();
		newNode->data= amount[i];
		newNode->next= NULL;
		if(newHead==NULL){
			newHead= newNode;
			curr= newNode;
		}
		else{
			curr->next= newNode;
			curr=newNode;
		}
	}
	return newHead;
}
int main(){
	Node* head= createNode(-1);
	head->next= createNode(5);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	head->next->next->next->next= createNode(2);
	Node* newHead= sortNode(head);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
