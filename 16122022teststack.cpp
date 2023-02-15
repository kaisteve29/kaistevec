#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	string str;
	cin >> str;
	stack<char>st;
	for(int i=0;i<str.length();i++){
		st.push(str[i]);
	}
	while(st.size()){
		cout << st.top()<<" ";
		st.pop();
	}
	return 0;
}
