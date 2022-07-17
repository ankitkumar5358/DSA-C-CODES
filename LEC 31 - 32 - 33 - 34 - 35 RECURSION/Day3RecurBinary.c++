#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
  // base case
  if(size == 0 || size == 1)
  return true;

  // processing
  if(arr[0] > arr[1]){
    return false;
  }
  else{
    bool remianingPart = isSorted(arr+1, size-1);
    return remianingPart;
  }
}


int main()
{
  int arr[5] = {2,3,4,6,9};
  int size = 5;
  int ans = isSorted(arr,size);

  if(ans){
    cout << "Array is Sorted" << endl;
  }
  else{
      cout << "Array is not Sorted" << endl;
  }


  return 0;
}
