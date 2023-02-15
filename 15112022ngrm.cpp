#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int re[n];
	stack<int>st;
	st.push(0);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=1;i<n;i++){
		while(!st.empty() && arr[st.top()]< arr[i]){
			re[st.top()]= arr[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
	    re[st.top()]= -1;
	    st.pop();
	}
	for(int i=0;i<n;i++){
		cout<< re[i]<< " ";
	}
	return 0;
}
