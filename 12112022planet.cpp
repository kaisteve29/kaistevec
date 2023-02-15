#include<iostream>
#include<stack>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  stack<int> st;
  for (int i = 0; i < n; i++) {
    int value = arr[i];
    if (value > 0) st.push(value);
    else {
      // xóa t?t c? các phàn t? < -value
      while(!st.empty() && st.top() < -value) {
        st.pop();
      }
      if (st.size() && st.top() == -value) {
        st.pop();
      } else if (st.size() && st.top() > -value) {
        
      } else {
        st.push(value);
      }
    }
  }
  stack<int>st1;
  while(!st.empty()){
    st1.push(st.top());
    st.pop();
  }
  while(!st1.empty()){
    cout<< st1.top()<< " ";
    st1.pop();
  }
  
  
}
