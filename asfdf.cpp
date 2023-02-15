#include<iostream>
using namespace std;
#define size 100
void swap(int &a,int &b){
  int c=a;
  a=b;
  b=c;
}

void sortPositiveNumbers(int arr[],int n){
  int count=0;
 for(int i=0;i<n;i++){
   cout << arr[i] << " ";
   if(arr[i]>=0){
     count++;
   }
  
 }
  

  int arr1[count];
  int i1=0;
  
  for (int i=0;i<n;i++){
   
    if(arr[i]>=0){
      
    arr1[i1]=arr[i];
      i1++;
    }
  }

  for(int i=0;i<count;i++){
    cout<<arr1[i];
  }
  
  for(int i=count-1;i>=1;i--){
       for(int j=0;j<i;j++ ){
         if(arr1[j]>arr1[j+1]){
           swap(arr1[j],arr1[j+1]);
         }
    }  
    int i2=0;
for(int i=0;i<n;i++){
  if(arr[i]>=0){
    arr[i]=arr1[i2];
    i2++;
  } 
}
  }
  }
int main (){
  int arr[]={4,-2,6,8,3};
  sortPositiveNumbers(arr,5);
  for(int i=0;i<5;i++){
    cout<< arr[i]<< " ";
  }
  return 0;
}
