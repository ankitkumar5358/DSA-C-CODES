#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size){
      int ans = 0;

      for(int i=0; i<arr.size(); i++){
            ans = ans ^ arr[i];
      }


      for(int i=1; i<arr.size(); i++){
            ans = ans ^ i;
      }
      return ans;

}

int main() {
      int arr[6] = {1,2,3,3,4,5};
      int size = 6;
      findDuplicate(arr, 6);

      return 0;
}