#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void insertSort(int arr[],int n){
	for(int i=n-1;i>=1;i--){
		for(int j=n-1-i;j<n-1;j++){
			if(arr[n-1-i+1]>arr[j]){
				swap(arr[n-1-i+1],arr[j]);
			}
			}
		}
	
	for(int i=0;i<n;i++){
		cout << arr[i]<<" ";
	}
}

int main (){
	int arr[]={56,34,72,3,20,31,47,10,79,15,83,40};
	insertSort(arr,12);
	return 0;
}
