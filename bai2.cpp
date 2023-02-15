#include<iostream>
using namespace std;

int sumExponential(int x,int n){
  int s=0;
  for(int i=1;i<n+1;i++){
    int a=1;
      for(int j=1;j<i+1;j++){
        a=a*x*-1;
      }
    s+=(-a);
  }
}
int main(){
  int x,n;
  cout<<"nhap x,n: ";
  cin>>x>>n;
  cout<<"S= "<<sumExponential(x,n);
  return 0;
}
