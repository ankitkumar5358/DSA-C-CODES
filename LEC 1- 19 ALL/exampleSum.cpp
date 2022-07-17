#include <iostream>

using namespace std;

int main() {

      int arr[5] = {2,4,6,18,12};
      int size = 5;
      int sum  = 0;
      for(int i=0; i<size; i++){
            sum = sum + arr[i];
      }
      cout << sum;
      return 0;
}