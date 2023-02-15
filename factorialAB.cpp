#include<iostream>
using namespace std;

int factorialAB(int a,int b){
	if(b<1){
		return 1;
	}
	else{
		return a*factorialAB(a,b-1);
	}
}

int main(){
	int a,b;
	cout<<"nhap a,b: ";
	cin>>a>>b;
	
	cout<< factorialAB(a,b);
	return 0;
}
