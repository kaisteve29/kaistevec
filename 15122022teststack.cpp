#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int>st1;
	st1.push(0);
	st1.push(1);
	stack<int>st2;
	st2= st1;
	while(!st2.empty()){
		cout<< st2.top()<< " ";
		st2.pop();
	}
	return 0;
}
