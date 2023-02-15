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
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			st.push(arr[i]);
		}
		else{
			if(arr[i]< -st.top()){
			}
			if(arr[i]==-st.top()){
				st.pop();
			}
			else{
				while(!st.empty() && arr[i]>-st.top()){
					st.pop();
				}
				st.push(arr[i]);
			}
		}
	}
	stack<int>st1;
	while(!st.empty()){
		st1.push(st.top());
		st.pop();
	}
	while(!st1.empty()){
		cout << st1.top()<< " ";
		st1.pop();
	}
	return 0;
}
