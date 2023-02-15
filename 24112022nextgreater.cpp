#include<iostream>
#include<stack>
using namespace std;

//3 1 4 3 -> 4 4 -1 -1
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i] ;
	}
	stack<int>st;
	st.push(0);
	int a[n];
	for(int i=1;i<n;i++){
		while(!st.empty() && arr[i]> arr[st.top()]){
			a[st.top()]= arr[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		a[st.top()]=-1;
		st.pop();
	}
	for(int i=0;i<n;i++){
		cout << a[i]<< " ";
	}
	return 0;
}
