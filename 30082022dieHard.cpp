#include<iostream>
using namespace std;

int dieHard(int h, int a)
{
	int count=0;
   while((h>17 && a>0)  || (a>8 && h>2)){
    if(h==17 && a>8){
    	a-=8;
    	h-=2;
    	count++;
	}
	if(a==8&&h>17){
		a+=8;
		h-=17;
		count++;
	}
	else{
   	if(h%17>= a%8){
   		h=h-17;
   		a=a+8;
   		count++;
   		cout<< h<< " "<< a<< endl;
	   }
	   else{
	   	h=h-2;
	   	a=a-8;
	   	count++;
	   	cout<< h<< " "<< a<< endl;
	   }
   }
}
   return count*2+1;
  
   
}
int main(){
	int h=2;
	int a=10;
	cout<< dieHard(h,a)<< endl;
	return 0;
	
}
