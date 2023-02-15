#include<iostream>
using namespace std;


 int amount(int a,int b){
	int max,min;
	if(a>=b){
	max=a;
	min=b;
	}
	else{
		min=a;
		max=b;
	}
	int count=0;
    for(int i=min;i<max+1;i++){
    	int test=1;
    	for(int j=1;j<(i/2+1);j++){
    		if(i % j==0){
    			test+=1;
			}
		}
		if(test %2==1){
			count+=1;
		}
	}
	return count;
}

int main (){
	int a,b;
	cout<< "nhap a,b: ";
	cin >> a >> b;
	cout<< amount(a,b)<<endl;
	return 0;
}
