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
	int a[n];
	for(int i=0;i<n;i++){
	    int res=-1;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				res=arr[j];
				break;
			}
		}
		cout << res << " ";
	}
	return 0;
}
