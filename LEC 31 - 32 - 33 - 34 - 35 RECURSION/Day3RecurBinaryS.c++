#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int start,int end, int key) {

  // base case 1 -- element not found
  if(start > end)
  return false;

  int mid = start + (end - start) / 2;

  // base case 2 -- element  found
  if(arr[mid] == key)
  return true;

  if(arr[mid] < key){
    return BinarySearch(arr,mid+1,end,key);
  }
  else{
    return BinarySearch(arr,start,mid-1,key);
  }

}

int main( ) {

  int arr[6] = {2,4,6,10,14,18}; //array is sorted
  int size = 6;
  int key = 18;
  int result = BinarySearch(arr,0,5,key);
  cout << "Present or Not =  " << result;
  /*
  bool isFound = BinarySearch(arr,start,end,key);

  if(isFound){
    cout << "Element is Present" << endl;
  }
  else{
      cout << "Element is not Present" << endl;
  }
  */

  return 0;
}
