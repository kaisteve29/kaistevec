#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};

void swap(int &a,int &b){
  int c=a;
  a=b;
  b=c;
}
Node *roatateLinkedList(Node *head, int k) {
     int n=0;
     Node* temp= head;
     while(temp != NULL){
       n++;
       temp= temp->next;
     }
     int arr[n];
     temp= head;
     int a=0;
     while(temp != NULL){
       arr[a]= temp->data;
       a++;
       temp= temp-> next;
     }
     for(int i=0;i<k;i++){
       for(int j=0;j<n-1;j++){
         swap(arr[j],arr[j+1]);
       }
     }
  Node* newHead= new Node();
  newHead-> data= arr[0];
  Node* curr=newHead;
  for(int i=1;i<n;i++){
    Node* newNode= new Node();
    newNode-> data= arr[i];
    curr->next= newNode;
    curr= newNode;
  }
  curr= newHead;
  return newHead;
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

 Node* newHead1= roatateLinkedList(head,8);
  while (newHead1 != NULL){
    cout<< newHead1->data<< " ";
    newHead1= newHead1-> next;
  }
  
  return 0;
}
