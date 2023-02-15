// * dereference operator: toan tu tro > lay gia tri cua 1 vung nho
#include<bits/stdc++.h>
using namespace std;

int main() {
	  int n = 10;
  cout << n << endl;
  cout << &n << endl;
  cout << *(&n) << endl;
  
  
  *(&n) = 5; 
  // n = 5;
  
  cout << n << endl;
  cout << &n << endl;
  return 0;
}
