#include<iostream>
#include<stack>
using namespace std;
int solve(string n){
    stack<char>st;
	int a=0;
	for( char i : n){
		if(i=='('){
			st.push(i);
			a++;
		}
		else{
			if(st.empty()){
				return a;
			}
			else{
				st.pop();
				a++;
			}
		}
	}
}
int main(){
	string n;
	cin >> n;
    cout<< solve(n)<< endl;
    return 0;
}
