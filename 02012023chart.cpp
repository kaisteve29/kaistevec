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
	cout<< " Dien tich lon nhat la: "<< area << endl;
	return 0;
}
