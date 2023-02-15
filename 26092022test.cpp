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

int main(){
	Node* head1= createNode(1);
	head1->next=createNode(2);
	head1->next->next=createNode(3);
	Node* head2= createNode(4);
	head2->next=createNode(5);
	head2->next->next=createNode(6);
	int a=0;
	int arr[6];
    while(head2){
    	if(head1==NULL){
    		arr[a]=head2->data;
    		head2=head2->next;
		}
		else{
			arr[a]=head1->data;
			head1=head1->next;
		}
		a++;
	
	}
    for(int i=0;i<6;i++){
    	cout<< arr[i]<< " ";
	}
	return 0;
}
