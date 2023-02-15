#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *createNode(int value) {
  Node *newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;
  return newNode;
}

Node *unionNode(Node *head1, Node *head2) {
  Node *temp = head1;
  Node *prev = NULL;
  while (temp->next) {
    temp = temp->next;
    prev = temp;
  }
  prev->next = head2;

  Node *curr = head1;
  int n = 0;
  while (curr) {
    n++;
    curr = curr->next;
  }

  int arr[n];
  int a = 0;
  curr = head1;
  while (curr) {
    arr[a] = curr->data;
    a++;
    curr = curr->next;
  }
  cout << endl;
  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
    if (min > arr[i]) {
      min = arr[i];     
    }
  }
  int count[max - min + 1];
  for (int i = 0; i < (max - min + 1); i++) {
    count[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    count[arr[i] - min]++;
  }
  Node* newHead= new Node();
  newHead->data= min;
  Node* curr1= newHead;  
  for(int i=1; i<max-min+1;i++){
  	if(count[i]>0){
  		Node* newNode= new Node();
		newNode->data= i+min;
		newNode->next= NULL; 
		curr1->next= newNode;
		curr1= curr1->next;		
	  }
  }
  return newHead;
}
int main() {
  Node *head1 = createNode(9);
  head1->next = createNode(6);
  head1->next->next = createNode(6);
  head1->next->next->next = createNode(4);
  head1->next->next->next->next = createNode(2);
  head1->next->next->next->next->next = createNode(3);

  Node *head2 = createNode(1);
  head2->next = createNode(2);
  head2->next->next = createNode(6);
  head2->next->next->next = createNode(4);

  Node *newHead = unionNode(head1, head2);
  while (newHead) {
    cout << newHead->data << " ";
    newHead = newHead->next;
  }
  return 0;
}
