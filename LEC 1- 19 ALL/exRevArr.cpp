#include <iostream>
using namespace std;

void printArray(int arr[], int n){
      for(int i = 0; i<n ; i++){
            cout << arr[i] << ",";
      }
      cout << endl;
}

void reverseArray(int arr[], int n){
      int start = 0;
      int end = n - 1;
      while(start <= end){
            swap(arr[start], arr[end]);
            start++;
            end--;
      }
}

int main() {
      int arr[5] = {5,7,9,2,3};
      int brr[6] = {2,5,9,6,10,3};
      
      reverseArray(arr, 5);
      reverseArray(brr, 6);
      
      printArray(arr, 5);
      printArray(brr, 6);

      return 0;
}