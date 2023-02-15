#include <iostream>

using namespace std;
#define M 3
#define N 4

int main() {
   int arr[M][N] = { 0, 3, 5, 9, 4, 1, 5, 2, 6, 3, 8, 7 };
   for (int i=0;i<3;i++){
   	for(int j=0;j<4;j++){
   		cout <<arr[i][j]<<" ";
	   }
	   cout<<endl;
   }
   return 0;
}
   
