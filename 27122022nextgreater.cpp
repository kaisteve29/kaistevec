#include<iostream>
#include<stack>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	stack<int>st;
	int gr[n];
	for(int i=0;i<n;i++){
		if(st.empty()){
			st.push(i);
		}
		else{
			while(!st.empty() && arr[i]>arr[st.top()]){
				gr[st.top()]= arr[i];
				st.pop();
			}
			st.push(i);
		}
	}
	while(!st.empty()){
		gr[st.top()]=-1;
		st.pop();
	}
	for(int i=0;i<n;i++){
		cout << gr[i]<< " ";
	}
	return 0;
}
