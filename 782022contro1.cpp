#include<iostream>
#include<string>
using namespace std;

int main(){
	int a=	300;
	string msg="mang cut cute";
	int* aPtr=&a;
	int* sumPtr= NULL;
	string* msgPtr=&msg;
	cout<<&a<< "    "<< &aPtr<<endl;
	cout<<&msg<<"    "<<&msgPtr<<endl;
	cout<<sumPtr<<endl;
	return 0;
}
