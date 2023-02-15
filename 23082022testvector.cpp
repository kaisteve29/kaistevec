#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	v.push_back(29);
	v.push_back(07);
	v.push_back(2001);
	cout << v.size() << endl;
	for(int i=0;i<v.size();i++){
		cout<< v[i]<< endl;
	}
	
	for(vector<int>::iterator it= v.begin();it != v.end();++it){
		cout<< *it<< endl;
	}
	
	return 0;
}
