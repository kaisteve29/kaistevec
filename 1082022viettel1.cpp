#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[n];
	cout<<"nhap n: ";
	cin >> n;
	
	for(int i=0;i<n;i++){
		cout<< "arr["<<i<<"] = ";
		cin>> arr[i];
	}
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum +=arr[i];
	}
	
	if(sum%3==0){
		int num=sum/3;
		int a=sum;
		int count1 =0;
		int count2=0;
		int count=0;
		for(int i=0;i<n;i++){
			a -= arr[i];
			if(a==(sum/3)){
				count1++;
			}
			if(a==(sum*2/3)){
				count2++;
			}
		}
    if(count1>0 && count2>0){
    	cout<<" so cach: "<< count1*count2<<endl;
	}
	else{
		cout<<"khong chia duoc";
	}
	}
	else{
		cout<<"khong chia duoc";
	}
	return 0;
}
