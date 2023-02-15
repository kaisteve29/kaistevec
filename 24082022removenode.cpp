#include <iostream>
using namespace std;

struct Node{
int data;
Node* next;
};
struct Node *removeNode(Node *head, int value) {
  Node *prev = NULL;
  Node *curr = head;

  while(curr) {
    if (curr->data != value) {
      prev = curr;
      curr = curr->next;
    } else {
      if (curr == head) {
        head = head->next;
        return head;
      } else {
        prev->next = curr->next;
        
        delete curr;
        return head;
      }
    }
  }
  return head;
}
int main(){
  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();
  Node* fourth = new Node();
  Node* fiveth = new Node();
  Node* sixth = new Node();
  Node* seventh = new Node();

  head-> data=1;
  head-> next=second;

  second-> data=2;
  second-> next=third;

  third-> data=3;
  third-> next=fourth;

  fourth-> data=4;
  fourth-> next=fiveth;

  fiveth-> data=5;
  fiveth-> next=sixth;

  sixth-> data=6;
  sixth-> next=seventh;

  seventh-> data=7;
  seventh-> next=NULL;
  Node* newHead=removeNode(head,6);
  while(newHead != NULL){
    cout<< newHead->data << " ";
    newHead= newHead->next;
  }
  return 0;
  }
