#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void bubbleSort(int arr[],int n){
	for(int i=0;i<n;i++){
	  for(int j=0;j<n-i;j++){
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
	int arr[]={4,6,1,5,3,20,2};
	/* 4,6,1,5,3,6,2
	   4 6
	*/
	
	bubbleSort(arr,7);
	return 0;
}
