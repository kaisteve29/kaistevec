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

Node* mergeTwoList(Node* head1,Node* head2){
	int n=0;
	Node* temp1=head1;
	Node* temp2=head2;
	while(temp2){
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
	int min= arr[0];
	int max= arr[0];
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
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
	for(int i=0;i<max-min;i++){
		count[i+1]+=count[i];
	}
	int amount[n];
	for(int i=0;i<n;i++){
		amount[count[arr[i]-min]-1]=arr[i];
		count[arr[i]-min]--;
	}
	Node* newHead=NULL;
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
	Node* head1= createNode(3);
	head1->next= createNode(2);
	head1->next->next= createNode(1);

	
	Node* head2= createNode(1);
	head2->next= createNode(4);
	head2->next->next= createNode(5);
	Node* newHead= mergeTwoList(head1,head2);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
}
