#include<iostream>
using namespace std;

double volume(double* a,double* b,double* c){
	int volume=0;
	if(*a>=0 && *b>=0 && *c>=0){
		volume=(*a)*(*b)*(*c);
	}
	else {
		cout<< "Please enter "
	}
	
	return volume;
}

int main(){
	double a=3;
	double b=4;
	double c=5;
	cout<< volume(&a,&b,&c);
	return 0;
}
