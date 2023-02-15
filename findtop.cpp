#include<iostream>
using namespace std;

void findTop(int arr[],int n){
	for(int i=1;i<n-1;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			cout<<arr[i]<<" ";
		}
	}
	if (arr[0]>arr[1]){
	cout<<arr[0]<<" ";
}
	if (arr[n-1]>arr[n-2]){
	cout <<arr[n-1];
}
}
int main(){
	int arr[]={1,4,6,8,2,4,6,5,9};
	findTop(arr,9);
	return 0;
}
