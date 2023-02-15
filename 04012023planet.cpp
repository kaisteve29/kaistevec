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
			if(st.top()+arr[i]<0){
			while(!st.empty() && st.top()*arr[i]<0 && st.top()+ arr[i]<0){				
			st.pop();
			}
			st.push(arr[i]);
		}
			if(st.top()+arr[i]==0){
				st.pop();
			}
			if(st.top()+ arr[i]>0){
		}
	}
	}
	while(!st.empty()){
		cout << st.top()<< " ";
		st.pop();
	}
	return 0;
}
