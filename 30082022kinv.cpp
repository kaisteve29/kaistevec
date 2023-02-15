#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(std::vector<int> arr)
{
	int n= arr.size();
	int count=0;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if((arr[i]<arr[j]&& i>j)||(arr[i]>arr[j]&& i<j)){
				count++;
			}
		}
	}
	return count;
    
}
int main(){
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(1);
	arr.push_back(2);
	cout<<solve(arr)<< endl;
	return 0;
}
