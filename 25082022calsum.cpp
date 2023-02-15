#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* createNode(int value){
  Node* newNode= new Node();
  newNode-> data= value;
  newNode-> next= NULL;
  return newNode;
}
int calSum(Node *head, int k) {
  Node* temp=head;
  int n=0;
  int total=0;
  while(temp){
    n++;
    temp=temp->next;
  }
  temp=head;
  int i=0;
  while(temp){
    i++;
    if(i>n-k){
      total+= temp->data;
    }
    temp=temp->next;
}
  return total;
  }
int main(){
  Node* head= createNode(1);
  head->next= createNode(2);
  head->next->next= createNode(3);
  head->next->next->next= createNode(4);
  head->next->next->next->next= createNode(5);
  cout<<calSum(head,3);
  return 0;
}
