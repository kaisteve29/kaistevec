#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}
void quickSort(int arr[],int left,int right){
	int pivot=arr[right];
	int count=0;
	for(int i=left;i<right;i++){
		if(arr[i]<pivot){
			swap(arr[count],arr[i]);
			count++;
		}
	}
		swap(arr[right],arr[count]);
		quickSort(arr,left,count -1);
		quickSort(arr,count+1,right);
}

int main(){
		int arr[]={56,34,72,3,20,31,47,10,79,15,83,40};
	quickSort(arr,0,11);
	for(int i=0;i<12;i++){
		cout<< arr[i]<< " ";
	}
	return 0;
}
