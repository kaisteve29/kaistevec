#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min= i;
		for(int j=i+1;j<n;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	for(int i=0;i<n;i++){
		cout<< arr[i]<< " ";
	}
}

int main(){
	int arr[]={3,6,1,2,8,9,5};
	selectionSort(arr,7);
	return 0;
}
