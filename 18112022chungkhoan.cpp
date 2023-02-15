#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	float arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=1;
	}
	int count=0;
	stack<float>st;
	st.push(arr[0]);
	for(int i=1;i<n;i++){
		if(arr[i]> st.top()){
			a[i]+= count;
		}
		while(!st.empty() && arr[i]>st.top() ){
			count++;
			a[i]++;
			st.pop();
		}
	st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
    	cout<< a[i] << " ";
	}
	return 0;
}
