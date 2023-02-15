#include<iostream>
using namespace std;

void twoArray(int arr1,int arr2,int n1,int n2){
	int max1=arr1[0];
	int min1=arr1[0];
	int max2=arr2[0];
	int min2=arr2[0];
	for(int i=1;i<n1;i++){
		if(max1<arr1[i]){
			max1=arr1[i];
		}
		if(min1>arr1[i]){
			min1=arr1[i];
		}
	}
	for(int i=1;i<n2;i++){
		if(max2<arr2[i]){
			max2=arr2[i];
		}
		if(min2>arr2[i]){
			min2=arr2[i];
		}
	}
	if(min1>max2){
		for(int i=1;i<n1;i++){
	}
}
