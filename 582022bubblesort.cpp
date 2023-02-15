#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void bubbleSort(int arr[],int n){
	for(int i=0;i<n-2;i++){
		for(int j=0;j<(n-i-1);j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={8,7,10,-2,5,6};
	bubbleSort(arr,6);
	return 0;
}
