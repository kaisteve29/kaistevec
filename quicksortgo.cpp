#include<iostream>
using namespace std;

void swap(int& a, int& b) {
   int tmp = a;
   a = b;
   b = tmp;
}
void quicksort(int arr[], int leftIndex, int rightIndex) {
   if (leftIndex < rightIndex) {
        int p = partition(arr, leftIndex, rightIndex);
        quicksort(arr, leftIndex, p - 1);
        quicksort(arr, p + 1, rightIndex);
   }
}

int partition(int arr[], int left, int right) {
   int pivot = arr[right];
   int i = left;
   for (int j = left; j <= right; j++) {
        if (arr[j] < pivot) {
             swap(arr[i], arr[j]);
             i = i + 1;
        }
   }
   swap(arr[i], arr[right]);
   return i;
}

int main(){
	int arr[]={56,34,72,3,20,31,47,10,79,15,83,40};
	quicksort(arr,0,11);
	for(int i=0;i<12;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
