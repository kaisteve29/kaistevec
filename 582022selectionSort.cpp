#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void selectionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i;j<n;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		swap(arr[i],arr[min]);
		
	}
	for(int i=0;i<n;i++){
		cout << arr[i]<< " ";
	}
}

int main() {
 int arr[]={6,8,3,2,4,1};
 selectionSort(arr,6);
 return 0;
}
