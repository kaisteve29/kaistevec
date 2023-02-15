#include<iostream>
#include<string>
using namespace std;

int main(){
	string a= "123";
	int n= a.length();
	cout<< n<< endl;
	string b="";
	for(int i=0;i<3;i++){
		b +="0";
	}
	cout<<b<<endl;
	for(int i=2;i>=0;i--){
		cout << int(a[i])<< " ";
		cout << int(b[i])<< " ";
	}
	return 0;
}
