#include<iostream>
#include<stack>
using namespace std;
bool truefalse(string s){
   stack<int>st;
   for(char i : s){
     if(i=='('){
       st.push(i);
     }
     else{
       if(st.empty()){
        return false;
       }
       else{
         st.pop();
       }
     }
   }
  if(st.empty()){
    return true;
  }
  else{
    return false;
  }

}
int main(){
   string s;
   cin >> s;
  if(truefalse(s)==true){
    cout<< "true"<< endl;
  }
  else{
    cout<< "false"<< endl;
  }
  return 0;
  }

