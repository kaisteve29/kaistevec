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

int countNode(Node *head) {
  Node *temp1 = head->next;
  Node *temp2 = head;
  while (temp1 != temp2 && temp1) {
    temp1 = temp1->next->next;
    temp2 = temp2->next;
  }
  if (temp1 == temp2) {
    int count = 1;
    while (temp1 && temp1->next != temp2) {
      count++;
      temp1 = temp1->next;
    }
    return count;
  } else
    return 0;
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
