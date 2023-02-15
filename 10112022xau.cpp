#include<iostream>
#include<stack>
#include<string>
using namespace std;

int solve(string n){
		int a=0;
	stack<char>st;
	for(int i=0;i<n.length();i++){
		if(n[i]=='('){
			st.push(i);
			a++;
		}
		else{
			if(st.empty()){
				return a;
			}
			else{
				a++;
				st.pop();
			}
		}
	}
}

int main(){
	string n;
	cin>>n;
	cout<< endl;
    cout<<solve(n) << endl;
    return 0;
}
