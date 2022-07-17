#include <iostream>
using namespace std;

int partition(int arr[], int s , int e){

  int pivot = arr[s];
  int count = 0;
  for(int i=s+1; i<=e; i++){
    if(arr[i] <= pivot){
      count++;
    }
  }
  // place pivot at right position
  int pivotIndex = s + count;
  swap(arr[pivotIndex], arr[s]);

  //two pointer for left and right part
  int i = s, j = e;
  while(i < pivotIndex && j > pivotIndex){

    while(arr[i] < pivot){
      i++;
    }
    while(arr[j] > pivot){
      j--;
    }
    //swap- in left(bada element) \\ right(chota element)
    if(i < pivotIndex && j > pivotIndex){
      swap(arr[i++], arr[j--]);
    }
  }
  return pivotIndex;
}

// quick sort recursive function
void quickSort(int arr[], int s, int e){
  // base case
  if(s >= e){
    return ;
  }

  // partion function
  int p = partition(arr, s , e);


  // sort left part recursive
  quickSort(arr, s , p-1);

  // sort right part recursive
  quickSort(arr, e , p+1);

}

int main() {

  int arr[10] = {9,3,8,1,5,4,2,7,6,10};
  int n = 10;
  cout << "Sorted Array Using Quick Sort" << endl;

  quickSort(arr, 0, n-1 );
  // print sprted array
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
