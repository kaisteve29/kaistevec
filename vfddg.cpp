#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++){
		cin >> arr1[i];
	}
	for(int i=0;i<n;i++){
		cin >> arr2[i];
	}
	
	for(int i=0;i<n;i++){
		cout << arr1[i]<< " ";
	}
	return 0;
}
