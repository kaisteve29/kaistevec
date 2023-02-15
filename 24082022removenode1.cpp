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

struct Node *removeNode(Node *head, int value) {
  Node *prev = NULL;
  Node *curr = head;

  while (curr != NULL) {
    if (curr->data != value) {
      prev = curr;
      curr = curr->next;
    } else {
      if (curr == head) {
        head = head->next;
        return head;
      } else {
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        return head;
      }
    }
  }
  return head;
}

int main() {

  Node *head = createNode(1);
  head->next = createNode(2);
  head->next->next = createNode(3);
  head->next->next->next= createNode(4);
  head->next->next->next->next=createNode(5);
  
  Node *newHead = removeNode(head, 3);
  while (newHead != NULL) {
    cout << newHead->data << " ";
    newHead = newHead->next;
  }
  return 0;
}
