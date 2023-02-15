#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int>arr;
	arr.push(4);
	arr.push(3);
	arr.push(2);
	arr.push(1);
	arr.pop();
	arr.pop();
	while(!arr.empty()){
		cout<< arr.top()<<" ";
		arr.pop();
	}
	return 0;
}
