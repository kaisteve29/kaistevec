#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void printReversedLinkedList(Node* head){
  int n=0;
  Node* temp=head;
  while(temp != NULL){
    n++;
    temp = temp->next;
  }
  temp= head;
  int arr[n];
  int i=0;
  while( temp !=NULL){
    arr[i]= temp->data;
    i++;
    temp=temp->next;
  }
  
  Node *newHead = new Node();
  newHead->data = arr[n - 1];
  Node *curr = newHead;
  for(int i=n-2;i>=0;i--){
    Node *newNode = new Node();
    newNode->data = arr[i];
    newNode->next = NULL;
    curr->next = newNode;
    curr = curr->next;
  }
  curr = newHead;

  
  while(newHead!=NULL){
    cout<< newHead->data<<" ";
    newHead=newHead->next;
  }
}


int main(){
  Node* head;
  Node* second;
  Node* third;

  head=new Node();
  second= new Node();
  third= new Node();

  head->data=1;
  head->next=second;

  second->data=2;
  second->next=third;

  third->data=3;
  third->next= NULL;
printReversedLinkedList( head);
  return 0;
}
