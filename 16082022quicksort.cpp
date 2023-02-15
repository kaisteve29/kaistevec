#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void quickSort(int arr[],int left,int right){
	if(left < right ){
		int pivot=arr[right];
		int count=left;
		for(int i=left;i<right;i++){
			if(arr[i]<pivot){
				swap(arr[i],arr[count]);
				count++;
			}
		}
		swap(arr[right],arr[count]);
		quickSort(arr,left,count-1);
		quickSort(arr,count+1,right);
	}
}

void sub(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<< arr[i]<< " ";
	}
}

int main(){
	int arr[]={56,34,72,3,20,31,47,10,79,15,83,40};
	quickSort(arr,0,11);
	sub(arr,12);
	return 0;
}
