#include <iostream>
using namespace std;

int sortedElement(int arr[], int n){
 int s = 0;
 int e = n;
 int i = 0;
 while(s <= e ){
   swap(arr[s],arr[e]);
   s++;
   e--;
 }

}

int main() {

      int arr[5] = {2,5,1,3,4};
      int n = 5;

      int element = sortedElement(arr, n);
      cout << element;
      return 0;
}
