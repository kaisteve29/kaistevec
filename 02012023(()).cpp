#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	string str;
	cin >> str;
	stack<char>st;
	bool res=true;
	for(int i=0;i<str.length();i++){
		if(st.empty()){
			if(str[i]==')'){
				res=false;
			}
			else{
				st.push(str[i]);
			}
		}
		else{
			if(str[i]==')'){
				st.pop();
			}
			if(str[i]=='('){
				st.push(str[i]);
			}
		}
	}
	if(st.empty() && res== true){
		cout << "right ^.^";
	}
	else{
		cout << "wronggg!!!";
	}
	return 0;
}
