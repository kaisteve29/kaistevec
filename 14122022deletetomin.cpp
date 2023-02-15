#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
  string str;
  cin >> str;
  int k;
  cin >> k;
  int n= str.length();
  int test=n;
  while(test%2==0){
    test/=2;
  }
  if(test==1){
     k=k/2;
  }
  else{
    k=k*2;
  }
  stack<char>st;
  st.push(str[0]);
  int i=1;
  while(i<n){
    while(k > 0 && !st.empty() && str[i]<st.top()){
      st.pop();
      k--;
    }
    st.push(str[i]);
    i++;
  }
  while(k>0){
    st.pop();
    k--;
  }
  while(!st.empty()){
    cout<< st.top()<< " ";
    st.pop();
  }
  return 0;
}
