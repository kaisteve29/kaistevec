#include<iostream>
#include<stack>
#include<string>
using namespace std;

// ))((())()())
int main(){
	string s;
	cin >> s;
	stack<char>st;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			st.push(s[i]);
		}
		else{
			if(!st.empty()){
				st.pop();
				count++;
			}
		}
	}
	count*=2;
	cout<< count << endl;
	return 0;
}
