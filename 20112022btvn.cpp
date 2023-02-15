#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	stack<int>st;
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	int area=0;
    int i=0;
    while(i<n){
    	if(st.empty() || arr[i]>= arr[st.top()]){
    		st.push(i);
    		i++;
		}
		else{
			int s= st.top();
			st.pop();
			if(st.empty()){
				area= max(area,i * arr[s]);
			}
			else{
				area= max(area,arr[s]*(i-st.top()-1));
			}
		}
	}
	while(!st.empty()){
		int s= st.top();
		cout << s << " "<< i<< endl;
			st.pop();
			if(st.empty()){
				if(area<i*arr[s]){
					area= i*arr[s];
				}
			}
			else{
				if(area<(i-st.top()-1)*arr[s]){
					area= (i-st.top()-1)*arr[s];
				}
			}
	}
	cout<< area;
	return 0;
}
