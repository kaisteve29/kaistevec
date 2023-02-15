#include<iostream>
#include<stack>
using namespace std;

int main(){
  int n; 
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>> a[i];
  }
  int b[n];
  stack<int>st;
  for(int i=0; i<n; i++){
    if(st.empty()){
      st.push(i);
    }
    else{
     while(!st.empty() && a[st.top()] < a[i]){
       b[st.top()]= a[i];
       st.pop();
     }
      st.push(i);
    }
  }
  while(!st.empty()){
    b[st.top()]= -1;
    st.pop();
  }
  for(int i=0; i<n; i++){
    cout << b[i]<< " ";
  }
  return 0;
}
