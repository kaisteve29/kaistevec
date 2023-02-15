#include<iostream>
using namespace std;

void swapAB(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void bubbleSort(int arr[],int n){
     for(int i=0;i<n;i++){
     	for(int j=n;j>=i+1;j--){
     		if(arr[j]>arr[j-1]){
     			swap(arr[j],arr[j-1]);
			 }
		 }
	 }

}
int main(){
	int arr[]={4,9,8,3,0,5};
	bubbleSort(arr,6);
	for(int i=0;i<6;i++){
		cout << arr[i]<<" ";
		
	}
	return 0;
}
