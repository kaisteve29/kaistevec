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
		}
		else{
			if(st.empty()){
        cout<< a;
				return a;
			}
			else{
				a++;
				st.pop();
			}
		}
	}
  return a;
}

int minChoice(string n){
	if(n.length()%2==1){
    	return -1;
	}
	else{
		stack<char>st;
		int a= solve(n);
		int left=0;
		int right=0;
		int amount= n.length();
		for(int i=0;i<amount;i++){
			if(n[i]=='('){
				left++;
			}
			else{
				right++;
			}
		}
		left=left-a;
		right=right-a;
		if(left%2==0 && right%2==0){
			return left/2 + right/2;
		}
		else return (left/2 + 1)+(right/2 +1);
}
}

int main(){
	string n;
	cin >> n;
	cout<< solve(n)<< endl;
	cout << minChoice(n)<< endl;
	return 0;
}
