#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n<3){
		return n-1;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main(){
	int n;
	cout<<"nhap n: ";
	cin>> n;
	for(int i=1;i<=n;i++){
		cout << fibonacci(i)<<endl;
	}
	return 0;
}
