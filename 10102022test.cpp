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

Node* halfNode(Node* head){
	Node* newHead= NULL;
	Node* curr= newHead;
	Node* temp= head;
	int a=0;
	while(temp){
		if(a%2==0){
		Node* newNode= new Node();
		newNode->data= temp->data;
		newNode->next= NULL;
		if(newHead==NULL){
			newHead= newNode;
			curr= newNode;
		}
		else{
			curr->next= newNode;
			curr= newNode;
		}
	}
	temp= temp->next;
	a++;
}
	return newHead;
}

int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	head->next->next->next->next= createNode(5);
	
	Node* newHead= halfNode(head);
	while(newHead){
		cout<< newHead->data << " ";
	    newHead= newHead->next;
	}
}
