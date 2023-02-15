#include<iostream>
using namespace std;
#define size 3
void sumMatrix(int arr1[size][size],int arr2[size][size],int n,int m){
     int arr[n][m];
     for(int i=0;i<n;i++){
     	for(int j=0;j<m;j++){
     		arr[i][j]=arr1[i][j]+arr2[i][j];
     		cout<<arr[i][j]<< " ";
		 }
		 cout<< endl;
	 }
}

int main(){
	int arr1[3][3]={1,4,7,2,6,5,8,2,4};
	int arr2[3][3]={3,5,6,4,1,7,7,2,6};
	sumMatrix(arr1,arr2,3,3);
	return 0;
}
