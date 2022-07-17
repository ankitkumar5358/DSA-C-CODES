#include <iostream>
using namespace std;

int printArray(int arr[], int n){
      for(int i=0; i<n;i++){
            cout << arr[i] << " ";
      }
}

int selectionSort(int arr[], int n){
      for(int i=0; i<n-1; i++){
            int min = i;
            for(int j= i+1; j<n; j++){
                  if(arr[j] < arr[min]){
                        min = j;
                  }
                  swap(arr[min], arr[i]);
            }
      }
}

int main() {
      int arr[5] = {2,1,5,3,9};
      int n = 5;

      selectionSort(arr,5);
      printArray(arr,5);


      return 0;
}