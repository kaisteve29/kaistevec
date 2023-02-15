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

void findThreeNumberwithSum(Node* head,int x){
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
		arr[a]=temp->data;
		a++;
		temp=temp->next;
	}
	for(int i=0;i<n-2;i++){
		int pivot=arr[i];
			int left=i+1;
			int right=n-1;
			while(left<right){
				if(pivot+ arr[left]+ arr[right]== x ){
					cout<<"("<< pivot<<" "<< arr[left]<< " "<< arr[right]<< ") ";
				}
				if(pivot+ arr[left]+ arr[right]<x){
					left++;
				}
				else{
					right--;
				}
		}
	}
}
int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(4);
	head->next->next->next= createNode(5);
	head->next->next->next->next= createNode(6);
	head->next->next->next->next->next= createNode(8);
	head->next->next->next->next->next->next= createNode(9);
	cout << "so nhom 3 co tong = 17 la: ";
	findThreeNumberwithSum(head,17);
	return 0;
}

