#include<iostream>
using namespace std;

long long factorial(int n){
	if(n==1){
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
}
int main(){
	int n;
	cout <<"nhap n: ";
	cin>> n;
	for(int i=0;i<n+1;i++){
		cout <<factorial(i)<<endl;
	}
	return 0;
}
