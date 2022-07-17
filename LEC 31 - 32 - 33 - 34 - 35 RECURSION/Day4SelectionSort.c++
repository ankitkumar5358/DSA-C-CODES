#include <iostream>
using namespace std;

void selectionSort(int* arr, int n){
  // base case
  if(n==0 || n==1)
  return ;

  // solve 1st case  - shift first smallest element to left
  for(int i=0; i<n-1; i++){
  int minIndex = i;
  for(int j = i+1; j<n ;j++){
    if(arr[j] < arr[minIndex])
      minIndex = j;
  }
  swap(arr[minIndex], arr[i]);
}

  /*
  int i = 0;
  int minValue = i;
  for( ; i<n-1; i++){
    if(arr[i] > minValue){
      swap(arr[i],arr[minValue]);
    }
  }
  */

  // recursive call
  selectionSort(arr, n-1);
}


int main() {

  int arr[5] = {3,5,7,1,9};
  selectionSort(arr,5);

  cout << "Selection Sorted Array is - " ;

  // print array
  for(int i=0; i<5; i++){
    cout << arr[i] << " | " ;
  }

  return 0;

}
