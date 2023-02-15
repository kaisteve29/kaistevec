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
	int array[n];
	for(int i=0;i<n;i++){
		if(st.empty()){
			st.push(i);
		}
		else{
			while(!st.empty() && arr[i]>arr[st.top()]){
				array[st.top()]= arr[i];
				st.pop();
			}
			st.push(i);
		}
	}
	while(!st.empty()){
		array[st.top()]=-1;
		st.pop();
	}
	for(int i=0;i<n;i++){
		cout << array[i]<< " ";
	}
	return 0;
	
}
