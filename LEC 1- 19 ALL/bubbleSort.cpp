#include <iostream>
using namespace std;

int printArray(int arr[], int n){
      for(int i=0;i<n; i++){
            cout << arr[i] << " ";
      }
}

int bubbleSort(int arr[], int n){
            for(int i = 0; i<n; i++) {
            for(int j = 0; j<n-1; j++) {
                  if(arr[j] > arr[j+1]) {
                        swap(arr[j+1], arr[j]);
                  }
            }
      }
}

int main() {
      int arr[6] = {10,1,7,6,14,9};
      int n = 6;
      bubbleSort(arr, 6);
      printArray(arr, 6);

      return 0;
}