#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	string n;
	cin >> n;
	stack<char>st;
	int i=1;
	st.push(n[0]);
	char arr[n.length()];
	arr[0]= n[0];
	while(i<n.length()){
	   bool result= true;
	   int a=i;
	   for(int j=0;j<st.size();j++){
	   	if(arr[j]!=n[a]){
	   		result= false;
		   }
		   a++;
	   }
	   if(result== true){
	   	st.push('*');
	   	i=a;
	   }
	   if(result==false){
	   	for(int k=i;k<a;k++){
	   		st.push(n[i]);
	   		i++;
		   }
	   }
	   st.push(n[i]);
	}
	stack<char>st1;
	while(!st.empty()){
		st1.push(st.top());
		st.pop();
	}
	while(!st1.empty()){
		cout <<st1.top();
		st1.pop();
	}
	return 0;
}
