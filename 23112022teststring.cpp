#include<iostream>
#include<stack>
using namespace std;

int main(){
	string n;
	cin >> n;
	for(int i=0;i<n.length();i++){
		if(n[i]=='('){
			cout<< n[i]<< " ";
		}
	}
	return 0;
}
