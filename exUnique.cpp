#include <iostream>
using namespace std;

void uniqueElement(int arr[], int size){
      int ans = 0;
      for(int i=0; i<size; i++){
            ans = ans ^ arr[i];
      }
            cout <<  "Unique Element in array is " << ans;
}
     

 
int main(){
      int arr[7] = {3,7,2,2,7,3,4};
      uniqueElement(arr, 7);
      return 0;
}