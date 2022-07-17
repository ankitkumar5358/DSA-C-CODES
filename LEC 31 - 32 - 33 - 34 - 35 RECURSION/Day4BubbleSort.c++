#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n){

  //base case -- already sorted
  if(n == 0 || n == 1)
  return ;

  // solve 1 case -- shift largest element to right
  for(int i=0; i<n-1;i++){
    if(arr[i]>arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }
  // recursive call
  bubbleSort(arr,n-1);

}

int main() {
  
  int arr[5] = {2,4,5,1,7};
  bubbleSort(arr,5);

  cout << "Sorted Array :-  " ;
  //print sorted array
  for(int i=0;i<5;i++){
    cout << " | "<< arr[i] << " | "  ;
  }

  return 0;
}
