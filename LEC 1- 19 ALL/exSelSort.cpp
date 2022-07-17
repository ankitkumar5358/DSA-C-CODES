#include <iostream>

using namespace std;

int printArray(int arr[], int n){
      for(int i=0; i<n;i++)
            cout << arr[i] << " ";
      }

int main() {

      int arr[6] = {2,4,1,3,5,7};
      int n = 6;

      for(int i=0; i<n-1; i++){
	
         int minIndex = i;
	   
         for(int j = i+1; j<n ;j++){
		   
               if(arr[j] < arr[minIndex])
			   minIndex = j;
	   }
	   
         swap(arr[minIndex], arr[i]);
      }


      printArray(arr, n);

      return 0;
}