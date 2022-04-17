#include <iostream>
using namespace std;

bool getElement(int arr[], int size, int key){
      for(int i=0; i<size; i++){
            if(arr[i] == key){
                  return 1;
            }
      }
      return 0;
}
 
int main() {
      int arr[10] = {5,7,-2,10,22,-2,0,1,22,13};
      int size = 10;
      int key = 1;
      bool found = getElement(arr, 10, 1);
      cout << found;

      return 0;
}