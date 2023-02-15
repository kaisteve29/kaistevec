#include<bits/stdc++.h>
using namespace std;

int main() {
  int money = 10;
  // cout << money << endl;
  // & address-of operator
  // cout << &money << endl;

  int dao_home1 = 10;
  int &long_home1 = dao_home1;

  long_home1 = 5;

  // cout << long_home1 << " " << dao_home1 << endl;
  cout << &dao_home1 << " " << &long_home1 << endl;


  // * dereference operator

  int dao_home2 = 5;
  int *long_home2 = &dao_home2;

  cout << dao_home2 << " " << long_home2 << endl;
  cout << &dao_home2 << " " << &long_home2 << endl;
  
  return 0;
}
