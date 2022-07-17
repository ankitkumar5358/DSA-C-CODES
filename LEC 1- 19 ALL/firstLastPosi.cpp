#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
      int ans = -1;
      int start = 0;
      int end = size - 1;
      int mid = (start + end) / 2;
      while(start <= end){
            if(arr[mid] == key){
                  ans = mid;
                  end = mid - 1;
            }
            else if(key > arr[mid]){
                  start = mid + 1;
            }
            else if(key < arr[mid]){
                  end = mid - 1;
            }
            mid = (start + end) / 2;
      }
      return ans;
}

int lastOcc(int arr[], int size, int key){
      int ans = -1;
      int start = 0;
      int end = size - 1;
      int mid = (start + end) / 2;
      while(start <= end){
            if(arr[mid] == key){
                  ans = mid;
                  start = mid + 1;
            }
            else if(key > arr[mid]){
                  start = mid + 1;
            }
            else if(key < arr[mid]){
                  end = mid - 1;
            }
            mid = (start + end) / 2;
      }
      return ans;
}


int main() {
      int arr[5] = {1,2,3,3,5};
      
      cout << "First Occurence is " << firstOcc(arr,5,3) << endl;
      cout << "Last Occurence is " << lastOcc(arr,5,3) << endl;

      return 0;
}