#include<iostream>
using namespace std;

int sumExponential(int x,int n){
	int s=0;
	for (int i=0;i<n+1;i++){
		int a=1;
		for(int j=0;j<2*i+2;j++){
			a *= x;
		}
		s +=a;
	}
	return s;
	
}

int main(){
	int x,n;
	cout<<"nhap x,n: ";
	cin>> x;
	cin>>n;
	cout<< "S = "<<sumExponential(x,n)<<endl;
	return 0;
}
