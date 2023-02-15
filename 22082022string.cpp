#include <iostream>
#include <string>
using namespace std;

struct Node {
  int data;
  Node *next;
};

string plusOne2String(string str) {
  int n = str.length();
  string b = "";
  for (int i = 0; i < n - 2; i++) {
    b += "0";
  }
  b += "1";
  int remainder = 0;
  string res = "";
  for(int i = n - 1; i >= 0; i--) {
    int t1 = int(str[i]);
    int t2 = int(b[i]);
    int sum = t1 + t2 + remainder;
    if (sum >= 10) {
      remainder = 1;
      res = to_string(sum % 10) + res;
    } else {
      res = to_string(sum) + res;
    }
  }
  if (remainder == 1) {
    res = "1" + res;
  }
  return res;
}

void printMillionDollar(Node *head) {
  string n = "";
  Node *temp = head;
  
  while (temp != NULL) {
    n = n + to_string((temp->data));
    temp = temp->next;
  }
  cout << plusOne2String(n);
}
int main() {
  string str = "123";
  int a = 1;
  cout << str + to_string(a) << endl;
  //  Node* head = new Node();
  //  Node* second = new Node();
  //  Node* third = new Node();
  //  Node* fourth = new Node();
  //  Node* fiveth = new Node();
  //  Node* sixth = new Node();
  //  Node* seventh = new Node();

  //  head-> data=1;
  //  head-> next=second;

  //  second-> data=2;
  //  second-> next=third;

  //  third-> data=3;
  //  third-> next=fourth;

  //  fourth-> data=4;
  //  fourth-> next=fiveth;

  //  fiveth-> data=5;
  //  fiveth-> next=sixth;

  //  sixth-> data=6;
  //  sixth-> next=seventh;

  //  seventh-> data=7;
  //  seventh-> next=NULL;

  // cout<< printMillionDollar(head)<< endl;

  return 0;
}
