#include <iostream>
using namespace std;

int moveZeros(int arr[], int size){
      int i = 0;
      for(int j = 0; j<size; j++){
            if(arr[j] != 0) {
                  swap(arr[j], arr[i]);
                  i++;
            }
      }
}

int printArray(int arr[], int size){
      for(int i=0; i<size; i++){
            cout << arr[i] << " ";
      }
      cout << endl;
}

int main() {

      int arr[6] = {0,1,0,3,12,0};
      int size = 6;
      
      moveZeros(arr, 6);
      printArray(arr, 6);

      return 0;
}