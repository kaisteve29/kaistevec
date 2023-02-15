#include<iostream>
using namespace std;

void count(int arr[],int n){
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
	int amount[max-min];
	for(int i=0;i<max-min;i++){
		amount[i]=0;
	}
	for(int i=0;i<n;i++){
		amount[arr[i]] +=1;
	}
	int b=amount[0];
	for(int i=1;i<max-min;i++){
		if(b<amount[i]){
			b=amount[i];
		}
	}
	for(int i=0;i<max-min;i++){
		if(b=amount[i]){
			for(int j=0;j<amount[i];j++){
			cout<<i<<" ";
		}
		}
	}
}
int main(){
	int arr[]={1,1,2,3,4,5,5,4,2,4,5};
	count(arr,11);
	return 0;
}
