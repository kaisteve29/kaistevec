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
	st.push(0);
	int area=0;
    for(int i=1;i<n;i++){
    	while(!st.empty() && arr[i]<= arr[st.top()]){
    		int s=st.top();
    		st.pop();
    		if(st.empty()){
    			area=max(area, arr[s]*i);
			}
			else{
				area=max(area, arr[s]*(i-st.top()-1));
			}
		}
    	st.push(i);
	}
	int ss=st.top();
	while(!st.empty()){
			int s=st.top();
    		st.pop();
    		if(st.empty()){
    			area=max(area, arr[s]*(s+1));
			}
			else{
				area=max(area, arr[s]*(ss-st.top()));
			}
	}
	cout<< area;
	return 0;
}
