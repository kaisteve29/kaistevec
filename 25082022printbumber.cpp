#include<iostream>
#include<math.h>

using namespace std;

struct Node{
int data;
Node* next;
};

Node* createNode(int value){
  Node* newNode= new Node();
  newNode->data= value;
  newNode->next= NULL;
  return newNode;
}

int printNumber(Node* head){
  int num=0;
  Node* temp= head;
  while(temp){
    num = num*10+ temp->data;
    temp = temp->next;
  }
  return num;
}
Node* printNewList(Node*head1,Node* head2){
  int num1 = printNumber(head1);
  int num2 = printNumber(head2);
  int num;
  if(num1<num2){
    num= num2- num1;
  }
  else{
    num= num1-num2;
  }
  
  int a;
  Node *newHead = NULL;
  Node *res = new Node();
  while(num> 0){
    a = num %10;
    Node *newNode = createNode(a);
    if (num < 10) {
      res = newNode;
    }
    num=num/10;
    newNode->next = newHead;
    newHead= newNode;
    
  }  
  return newHead;
}
int main(){
  Node* head1= createNode(1);
  head1->next= createNode(1);
  head1->next->next= createNode(1);
 

   Node* head2= createNode(4);
  head2->next= createNode(2);

 Node* newHead= printNewList(head1,head2);
  while(newHead){
    cout<< newHead->data << " ";
    newHead= newHead->next;
  }

  return 0;
}
