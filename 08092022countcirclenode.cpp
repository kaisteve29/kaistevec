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

int countNode(Node* head){
	Node* head1= head;
	Node* head2= head->next;
	while(head1!= head2 && head1 && head2){
		head1=head1->next;
		head2=head2->next->next;
		
	}
	Node* temp= head1->next;
	int i=1;
	while(temp!=head1){
		i++;
		temp=temp->next;
	}
	return i;
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

  cout << countNode(head) << endl;
  return 0;
}

