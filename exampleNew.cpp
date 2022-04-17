#include <iostream>

using namespace std;

void getMaxMin(int arr[] ,int size){
      int max = arr[0] , min = arr[0];
      for(int i = 0; i< size; i++){
            if(max < arr[i]){
                  max = arr[i];
            }
            if(min > arr[i]){
                  min = arr[i];
            }
      }
      cout << "Minimum value is " << min << endl;
      cout << "Maximum value is " << max << endl;

}

int main() {
      int arr[8] = {200,999,111111,-100,8,10,20,90};
      int size = 8;
      getMaxMin(arr, 8);

      return 0;
}