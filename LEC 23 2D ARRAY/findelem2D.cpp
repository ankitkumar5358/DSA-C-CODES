#include <iostream>
using namespace std;

// find target element function
bool isPresent(int arr[3][4], int target, int row, int col){
    for(int i= 0; i<3;i++){
        for(int j=0; j<4; j++){
              // find target in both loop and return true
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}      
// 0 1 2 22 90 44 88 90 88 11 876 0111

int main(){

      int arr[3][4];
      cout << "Enter your 2d array" << endl;
      //  taking input
      for(int i=0;i<3;i++){
            for(int j=0; j<4;j++){
                  cin >> arr[i][j];
            }
      }
      // output
      for(int i=0;i<3;i++){
            for(int j=0; j<4;j++){
                  cout <<  arr[i][j] << " ";
            }
            cout << endl;
      }
      cout << "Enter the element to search" << endl;
      int target;
      cin >> target;
      if(isPresent(arr,target,3,4)){
          cout << "Element Found" << endl;
      }
      else{
          cout << "Element Not Found" << endl;
      }


      return 0;
}
