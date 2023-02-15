#include<iostream>
using namespace std;
#define MAX 4

void findQueen(int arr[MAX][MAX],int n,int m){
	 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  for(int i=0;i<n;i++){
    int a= arr[i][0];
    int x;
    int count=0;
    for(int j=1;j<m;j++){
      if(a<arr[i][j]){
        a=arr[i][j];
        x=j;
      }
    }
    for(int k=0;k<n;k++ ){
      if(arr[k][x]>a){
        count++;
      }
    }
    if (count > 0)
      continue;
    int a1=x;
    int b1=i;
    count = 0;
    while(a1>0 && b1>0){
      if(a>arr[a1][b1]){
        count++;
      }
      a1--;
      b1--;
    }
    if (count > 0)
      continue;
    int a2=x;
    int b2=i;
    count=0;
    while(a2<m && b2>0){
      if(a>arr[a2][b2]){
        count++;
      }
      a2++;
      b2--;
    }
    if (count > 0)
      continue;
  int a3=x;
    int b3=i;
    count=0;
    while(a3<m && b3<n){
      if(a>arr[a3][b3]){
        count++;
      }
      a3++;
      b3++;
    }
    if (count > 0)
      continue;
  int a4=x;
    int b4=i;
    count=0;
    while(a4>0 && b4<n){
      if(a>arr[a4][b4]){
        count++;
      }
      a4--;
      b4++;
    }
    if (count == 0){
      cout<<arr[i][x]<<" ";
    }
      
}
  }
int main(){
  int arr[4][4]={4,3,9,5,6,2,4,5,1,7,8,9,5,1,4,8};
  findQueen(arr,4,4);
}
