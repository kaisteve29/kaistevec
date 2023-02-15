#include<iostream>
#include<stack>
using namespace std;

int  main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int i=0;
	stack<int>st;
	int area=0;
	while(i<n){
	if(st.empty() || arr[i]>= arr[st.top()]){
		st.push(i);
		i++;
	}
	else{
		int s=st.top();
		st.pop();
		if(st.empty()){
			area= max(area,i*arr[s]);
		}
		else{
			area= max(area,(i-st.top()-1)*arr[s]);
		}
	}
    }
    while(!st.empty()){
    	int s=st.top();
		st.pop();
		if(st.empty()){
			area= max(area,i*arr[s]);
		}
		else{
			area= max(area,(i-st.top()-1)*arr[s]);
		}
	}
	cout<< area << endl;
	return 0;
}
