#include<iostream>
#include<stack>
using namespace std;

int main(){
	int arr[]={6,9,3,2,5};
	stack<int>st;
	for(int i=4;i>=0;i--){
		st.push(arr[i]);
	}	
	cout<< st.size() << endl;
	int a= st.top();
	st.pop();
	while(!st.empty()){
		if(a>st.top()){
			a= st.top();
		}
		st.pop();
	}
	cout<< a<< endl;
	return 0;
}
