#include<iostream>
#include<stack>
using namespace std;

int maxArea(int arr[],int n){
	int area=0;
	stack<int>st;
	for(int i=0;i<n;i++){
		if(st.empty()){
			st.push(i);
		}
		else{
			while(!st.empty() && arr[i] <= arr[st.top()]){
				int save= st.top();
				st.pop();
				if(st.empty()){
					area=max(area,arr[save]*i);
				}
				else{
					area=max(area,arr[save]*(i-st.top()-1));
				}
			}
			st.push(i);
		}
	}
	while(!st.empty()){
		int save= st.top();
				st.pop();
				if(st.empty()){
					area=max(area,arr[save]*n);
				}
				else{
					area=max(area,arr[save]*(save-st.top()));
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
	int area= 0;
	for(int i=m-2;i>=0;i--){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1){
			arr[i][j]+= arr[i+1][j];
		}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<< arr[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=0;i<m;i++){
		int array[n];
		for(int j=0;j<n;j++){
			array[j]= arr[i][j];
		}
		area= max(area,maxArea(array,n));
	}
	cout << "dien tich lon nhat: "<< area;
	return 0;
	
}
