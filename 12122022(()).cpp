#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	string n;
	cin >> n;
	stack<char>st;
	bool result= true;
	for(int i=0;i<n.length();i++){
		if(n[i]=='('){
			st.push(n[i]);
		}
		else{
			if(st.empty()){
				result= false;
			}
			else{
				st.pop();
			}
		}
	}
	if(!st.empty()){
		result= false;
	}
	if(result== true){
		cout << "true";
	}
	else{
		cout<< "false";
	}
	return 0;
}
