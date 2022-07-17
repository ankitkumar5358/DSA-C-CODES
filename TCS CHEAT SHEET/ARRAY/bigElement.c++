#include <iostream>
using namespace std;

int maxElement(int arr[], int n) {
  int temp = arr[0];
  for(int i=0; i<n;i++) {
    if(arr[i] > temp){
      temp = arr[i];
    }
  }
  return temp;
}


int main() {

  int arr[6] = {6,1,-20, 0, 111, 999};
  int n = 6;
  int maxi = maxElement(arr, n);
  cout << "Maximum Element is " << maxi <<  endl;

  return 0;
}
