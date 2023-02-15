#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void bubbleSort(int arr[],int n){
	int a=0;
	for(int i=0;i<n-2;i++){
		for(int i=0;i<n-a-1;i++){
			if(arr[i]> arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
		a++;
	}
	for(int i=0;i<n;i++){
		cout<< arr[i]<< " ";
	}
}

int main(){
	int arr[]={3,5,1,2,7,4,6};
	bubbleSort(arr,7);
	return 0;
}
