#include<bits/stdc++.h>
using namespace std;

int main() {
int a[5]={1,2,3,4,5};
  int*aa1 =a;
  int*aa2=(a+1);
  int*aa3=(a+2);
  int*aa4=(a+3);
  int*aa5=(a+4); 
  int*aa[5]={a,a+1,a+2,a+3,a+4};
  for(int i=0;i<5;i++){
    cout<<*(a+i)<<" ";
  }
  *a=6;
  cout<<*aa1<<endl;
}
