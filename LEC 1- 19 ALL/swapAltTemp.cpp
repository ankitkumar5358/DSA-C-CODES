#include <iostream>
using namespace std;

int swapAltTemp(int arr[], int size){
      for(int i=0; i<size; i++){
            swap(arr[0], arr[1]);
                  int temp = arr[1];
                  arr[1] = arr[0];
                  arr[0] = arr[1];
      }
      
}


int main() {

      int arr[2] = {2,5};
      int found =  swapAltTemp(arr,2);
      cout << "Swap Element are " << found;

      return 0;
}