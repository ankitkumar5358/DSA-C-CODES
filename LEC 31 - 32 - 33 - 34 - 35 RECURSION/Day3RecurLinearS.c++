#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int k) {

  // base case
  if(size == 0){
    return false;
  }

  if(arr[0] == k){
    return true;
  }

  else{
    bool remianingPart = LinearSearch(arr+1, size-1, k);
    return remianingPart;
  }

}

int main( ) {
  int arr[5] = {3,5,7,9,11};
  int size = 5;
  int k = 9;

  bool isFound = LinearSearch(arr,size,k);

  if(isFound){
    cout << "Element is Present" << endl;
  }
  else{
      cout << "Element is not Present" << endl;
  }

  return 0;
}
