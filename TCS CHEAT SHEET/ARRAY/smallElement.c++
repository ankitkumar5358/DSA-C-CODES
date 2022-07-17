#include <iostream>


using namespace std;

int minElement (int arr[], int n) {
  int temp = arr[0];
  for(int i=0; i<n ; i++){
    if(arr[i] < temp)
    temp = arr[i];
  }
return temp;
}

int main () {

  int arr[6] = {5,0,-11,1,8,6};
  int n = 6;
  int small = minElement(arr, n);
  cout << "Smallest Element is " << small ;


  return 0;
}
