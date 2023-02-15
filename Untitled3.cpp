#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
	string str;
	cin >> str;
	int i=0;
	int left=0;
	int right;
	stack<char>st;
	while(i<str.length()){
		if(str[i]==')'){
			left++;
	    }
	    i++;
	}
	i=0;
	right= str.length()- left;
	for(int j=0;j<n;j++){
		if(str[j]=='('){
			st.push();
		}
		else{
			if(st.empty()){
				
			}
			else{
				st.pop();
				i++;
			}
		}
	}
}
