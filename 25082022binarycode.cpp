#include<iostream>
#include<math.h>
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
int binaryCode(Node* head){
  Node* temp= head;
  int n=0;
  while(temp){
    n++;
    temp=temp->next;
  }
  temp= head;
  int result = 0;
  int i = 0;
  while(temp) {
    result += temp->data * pow(2, n - i - 1);
    i++;
    temp = temp->next;
  }
  return result;
}
int main(){
  Node* head= createNode(1);
  head->next= createNode(2);
  head->next->next= createNode(3);
  head->next->next->next= createNode(4);
  head->next->next->next->next= createNode(5);
  cout<<binaryCode(head);
  return 0;
}
