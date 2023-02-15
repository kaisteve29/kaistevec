#include<iostream>
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

Node* partitionNode(Node* head,int x){
  Node* smallestNode= NULL;
  Node* sCurr= smallestNode;
  Node* moreNode= NULL;
  Node* mCurr= moreNode;
  Node* temp= head;
  int a=0;
  while(temp){
    Node* newNode= new Node();
    newNode->data= temp->data;
    newNode->next= NULL;
    if(temp->data <= x){
      if(smallestNode==NULL){
        smallestNode= newNode;
        sCurr= newNode;
      }
      else{
        sCurr->next= newNode;
        sCurr= newNode;
      }
      a++;
    }
    else{
      if(moreNode==NULL){
        moreNode= newNode;
        mCurr= newNode;
      }
      else{
        mCurr->next= newNode;
        mCurr= newNode;
      }
      a--;
    }
    temp= temp->next;
  }
  Node* last= smallestNode;
  if(a!=0){
    return NULL;
  }
  else{
    while(last->next){
      last=last->next;
    }
    last->next= moreNode;
    return smallestNode;
  }
}

int main(){
  Node* head= createNode(4);
  head->next= createNode(4);
  head->next->next= createNode(6);
  head->next->next->next= createNode(2);
  head->next->next->next->next= createNode(3);
  head->next->next->next->next->next= createNode(2);
  Node* newHead= partitionNode(head,2);
  while(newHead){
    cout<< newHead->data << " ";
    newHead= newHead->next;
  }
  return 0;
}
