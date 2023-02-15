#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned int n);

int main() {
     // in danh sách các F(i)
     for (unsigned int i = 0; i <= 20; i++) {
           cout << "F" << i << " = " << fibonacci(i) << endl;
     }
     return 0;
}

unsigned long long fibonacci(unsigned int n) {
     if (n == 0 || n == 1) { // di?m d?ng
           return n;
     }
     else { // bu?c d? quy
           return fibonacci(n - 1) + fibonacci(n - 2);
     }
}
