#include <iostream>
using namespace std;

void printArr(int arr[], int n){
      for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
      }
      cout << endl;
}



void swapAlternate(int arr[], int n){
      for(int i=0; i<n; i+=2){
            if(i+1 < n){
                  swap(arr[i], arr[i+1]);
            }
      }
}



int main() {

      int n = 5;

      int arr[6] = {1,3,2,7,11,8};
      int brr[5] = {1,0,9,8,5};

      swapAlternate(arr, 6);
      swapAlternate(brr, 5);

      cout << "Even Array" << endl;
      printArr(arr, 6);
      cout << "Odd Array" << endl;
      printArr(brr, 5);

      return 0;
}