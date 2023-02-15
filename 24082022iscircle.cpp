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

bool isCircle(Node *head) {
  if(head == NULL) return true;
  Node *curr = head->next;
  while(curr && curr != head) {
    curr = curr->next;
  }
  if (curr == head) return true;
  return false;
}

int main() {

  Node *head = createNode(1);
  head->next = createNode(2);
  head->next->next = createNode(3);
  head->next->next->next= createNode(4);
  head->next->next->next->next=createNode(5);
  Node* last= createNode(6);
  head->next->next->next->next->next=last;
  last->next= head;
  
 if(isCircle(head)== true){
 	cout << "true"<< endl;
 }
 else{
 	cout<< " false"<< endl;
 }
  return 0;
}
