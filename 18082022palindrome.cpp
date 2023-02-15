/*
1->2->1: palindrome
1->2->3: no palindrome
*/
#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

bool checkPalindrome(Node *head) {
 int n=0;
  Node* temp=head;
  while(temp!=NULL){
    n++;
    temp= temp->next;
  }
  temp=head;
  int arr[n];
  int i=0;
  while(temp!=NULL){
    arr[i]= temp->data;
    i++;
    temp=temp->next;
  }
  int count=0;
  for (int j=0;j<n/2;j++){
    if(arr[j]!=arr[n-j-1]){
      return false;
    }
  }
  return true;
}
int main() {
	Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();
  Node* fourth = new Node();
  Node* fiveth = new Node();
  Node* sixth = new Node();
  Node* seventh = new Node();

  head-> data=2;
  head-> next=second;

  second-> data=2;
  second-> next=third;

  third-> data=4;
  third-> next=fourth;

  fourth-> data=4;
  fourth-> next=fiveth;

  fiveth-> data=4;
  fiveth-> next=sixth;

  sixth-> data=2;
  sixth-> next=seventh;

  seventh-> data=2;
  seventh-> next=NULL;
  
  if(checkPalindrome(head)== true){
  	cout<< "correct"<< endl;
  }
  else{
  	cout<<"incorrect"<<endl;
  }
  
  return 0;
}
