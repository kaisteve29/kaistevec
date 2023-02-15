#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};

int printMillionDollar(Node* head){
  int n=0;
  Node* temp= head;
  while(temp != NULL){
    n++;
    temp= temp->next;
  }
  temp =head;
  int a=0;
  int arr[n];
  while(temp != NULL){
    arr[a]= temp->data;
    a++;
    temp= temp->next;
  }
  int number=0;
  for(int i=0;i<n;i++){
    number= number*10 + arr[i];
  }
  number+=1;
  return number;
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

 cout<< printMillionDollar(head)<< endl;
  
  return 0;
}
