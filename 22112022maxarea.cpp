#include<iostream>
#include<stack>
using namespace std;

int maxChart(int arr[],int n){
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
	return area;
}
int main(){
	int m,n;
	cin >> m >> n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}
	for(int i=1;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]!=0){
				arr[i][j]+=arr[i-1][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<< arr[i][j] << " ";
		}
		cout << endl;
	}
	int area=0;
	for(int i=0;i<m;i++){
		int test[n];
		for(int j=0;j<n;j++){
			test[j]=arr[i][j];
		}
		area= max(area,maxChart(test,n));
	}
	cout<< area;
	return 0;
}
