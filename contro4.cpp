#include<bits/stdc++.h>
using namespace std;

int main() {
  int a = 10;
  cout << a << endl;
  // & address-of operator
  cout << &a << endl;
     // dia chi
  int dao_home = 10;
  int &long_home = dao_home; //bien tham chieu 

  cout << long_home << " " << dao_home << endl;
  cout << &dao_home << " " << &long_home;
  
  return 0;
}
