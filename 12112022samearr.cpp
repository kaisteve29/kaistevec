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
stack<int>st1;
stack<int>st2;
  int a=0;
  for(int i=0;i<n;i++){
    st1.push(arr1[i]);
    while(!st1.empty() && st1.top()== arr2[a]){
      st2.push(st1.top());
      st1.pop();
      a++;
    }
  }
  if(st1.empty()){
    cout << "yes"<< endl;
  }
  else{
    cout << "no"<< endl;
  }
  return 0;
  }
