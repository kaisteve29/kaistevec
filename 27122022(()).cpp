#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
	string str;
	cin >> str;
	stack<char>st;
	bool result=true;
	bool res;
	for(int i=0;i<str.length();i++){
    if(st.empty()){
    	if(str[i]=='('){
    		st.push(str[i]);
		}
		else{
			result= false;
		}
	}
	else{
		if(str[i]=='('){
			st.push(str[i]);
		}
		else{
			st.pop();
		}
	}
	}

	if(st.empty() && result==true){
		cout << "yes" ;
	}
	else{
		cout << "no";
	}
	return 0;
}
