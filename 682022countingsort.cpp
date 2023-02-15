#include<iostream>
using namespace std;

void countingSort(int arr[],int n){
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	int count[max-min+1];
	for(int i=0;i<max-min+1;i++){
		count[i]=0;
	}
	for(int i=0;i<n;i++){
		count[arr[i]-min]++;
	}
	for(int i=0;i<max-min;i++){
		count[i+1]+=count[i];
	}
	int amount[n];
	for(int i=0;i<n;i++){
		amount[count[arr[i]-min]-1]=arr[i];
		count[arr[i]-min]--;
	}
	for(int i=0;i<n;i++){
		cout<< amount[i]<< " ";
	}
}
int main(){
	int arr[]={8,7,4,11,-9,7,1,5,6,4};
	countingSort(arr,10);
	return 0;
}
