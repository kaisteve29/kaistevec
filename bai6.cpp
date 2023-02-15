#include<iostream>
using namespace std;

void deletePrime(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]<2){
			cout<<arr[i]<<" ";
		}
		else{
		
		int a=0;
		for(int j=1;j<arr[i];j++){
			if(arr[i] % j==0){
				a +=1;
			}
		}
		if (a>1){
			cout<<arr[i]<<" ";
		}
	}
}
	
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	deletePrime(arr,9);
	return 0;
}
