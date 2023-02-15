#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node* next;
};

void printLinkledList(Node *head) {
  if (head == NULL) return ;
  int a=0;
  while(head != NULL ) {
    a+=1;
    if(a%2==1){
       cout << head->data << " ";
    }
    head = head->next;
  }
}

// head->next
// head->next->next
// head->next->next->next
// head->next-> .....

int main() {
  Node *head = NULL;
  Node *second = NULL;
  Node *third = NULL;
  Node *fourth= NULL;
  Node *fiveth= NULL;
  Node *sixth= NULL;

  head = new Node();
  second = new Node();
  third = new Node();
  fourth = new Node();
  fiveth = new Node();
  sixth = new Node();

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 4;
  third->next = fourth;

  fourth->data = 6;
  fourth->next = fiveth;

  fiveth->data = 8;
  fiveth->next = sixth;

  sixth->data = 10;
  sixth->next = NULL;

  printLinkledList(head);
  
}
