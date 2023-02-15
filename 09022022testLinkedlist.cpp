#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

int main(){
	Node* newHead= new Node();
	cout<< newHead->data << " ";
	
	return 0;
}
