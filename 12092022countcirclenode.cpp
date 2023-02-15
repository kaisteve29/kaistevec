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

int countCircleNode(Node* head){
	Node* head1= head;
	Node* head2= head->next;
	while(head1!=head2){
		head1=head1->next;
		head2=head2->next->next;
	}
	int n=1;
	while(head1->next!=head2){
		n++;
		head1=head1->next;
	}
	return n;
}

int main() {

  Node *head = createNode(1);
  head->next = createNode(2);
  head->next->next = createNode(3);
  Node *four = createNode(4);
  head->next->next->next = four;
  head->next->next->next->next = createNode(5);
  head->next->next->next->next->next = createNode(6);
  head->next->next->next->next->next->next = createNode(7);
  Node *eight = createNode(8);
  head->next->next->next->next->next->next->next = eight;
  eight->next = four;

  cout << countCircleNode(head) << endl;
  return 0;
}

