#include <iostream>
using namespace std;

int arrSum(int arr[], int size) {

   // base case
   if(size == 0)
   {
      return 0;
   }

   if(size == 1)
   {
     return arr[0];
   }

   // processing
    int remianingPart = arrSum(arr+1, size-1);
    int sum = arr[0] + remianingPart;

    return sum;
}

int main( ) {
  int arr[5] = {3,5,7,9,11};
  int size = 5;

  int sum = arrSum(arr,size);
  cout << "Sum Using Recursion is " <<   sum;
  return 0;
}
