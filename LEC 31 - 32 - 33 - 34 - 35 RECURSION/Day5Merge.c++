#include <iostream>
using namespace std;

void merge(int* arr, int s, int e) {

  int mid = (s+e) / 2;

  // defining both divided array legth
  int len1 = mid - s + 1;
  int len2 = e - mid;

  //creating new array
  int* first = new int[len1];
  int* second = new int[len2];

  // copy values using loop inside both newly created array
  int k = s;
  for(int i=0; i<len1; i++){
    first[i] = arr[k++];
  }

  k = mid+1;
  for(int i=0; i<len2; i++){
    second[i] = arr[k++];
  }

  // merge  two sorted array
  int index1 = 0;
  int index2 = 0;
  k = s;

  while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]) {
      arr[k++] = first[index1++];
    }
    else{
      arr[k++] = second[index2++];
    }
  }


  while (index1 < len1) {
    arr[k++] = first[index1++];
  }

  while (index2 < len2) {
    arr[k++] = second[index2++];
  }

  // delete dynamic created array
  delete []first;
  delete []second;


}


void mergeSort(int* arr, int s, int e){

  // base case
  if(s >= e)
  return;

  //int mid = s + (e-s) / 2;
  int mid = (s+e) / 2;

  //sort left part
  mergeSort(arr,s,mid);

  // sort right part
  mergeSort(arr,mid+1,e);

  // merge both part
  merge(arr,s,e);

}


int main() {
  int arr[6] = {2,5,1,10,7,9};
  int n = 6;

  mergeSort(arr,0,n-1);
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }


  return 0;
}
