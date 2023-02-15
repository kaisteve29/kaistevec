#include<iostream>
#include<stack>
using namespace std;

int main(){
	string n;
	cin >> n;
	for(char i=n.length()-1;i>=0;i--){
		cout<< n[i]<< endl;
	}
	return 0;
}
