#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void bubbleSort(int arr[],int n){
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<< arr[i]<< " ";
	}
}

int main(){
	int arr[]={3,6,1,2,8,9,5};
	bubbleSort(arr,7);
	return 0;
}
