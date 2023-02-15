#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void printLinkedList(Node* head){
  if(head==NULL) return;
  while(head!=NULL){
    cout<< head->data<<" ";
    head=head->next;
  }
}

int findMiddleElement(Node *head) {
  int count=0;
  int a=0;
  Node *temp = head;
   while(temp!=NULL){
     count++;
      temp=temp->next;
   }
  temp = head;
  if(count%2==0){
    while(temp!=NULL){
      a++;
      if(a==count/2)return temp->data;

      temp=temp->next;
    
    }
    }
  else{
     while(temp!=NULL){
      a++;
      if(a==count/2+1)return temp->data;

      temp=temp->next;
    
    }
  }
  return -1;
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

  // printLinkedList(head);
  cout<< findMiddleElement(head);
  return 0;
}
