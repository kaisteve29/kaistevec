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
void arrayMerge(Node* head1,Node* head2){
		int n=0;
	Node* temp1=head1;
	Node* temp2=head2;
	while(temp1){
		n++;
		if(temp1==NULL){
			temp2=temp2->next;
		}
		else{
			temp1=temp1->next;
		}
	}
	temp1=head1;
	temp2=head2;
	int arr[n];
    int a=0;
    while(temp2){
    	if(temp1==NULL){
    		arr[a]=temp2->data;
    		temp2=temp2->next;
		}
		else{
			arr[a]=temp1->data;
			temp1=temp1->next;
		}
		a++;
	}
	
}
int main(){
	Node* head1= createNode(1);
	head1->next= createNode(2);
	head1->next->next= createNode(3);

	
	Node* head2= createNode(1);
	head2->next= createNode(4);
	head2->next->next= createNode(5);
	arrayMerge(head1,head2);
	return 0;
}
