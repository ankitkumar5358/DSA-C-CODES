#include <iostream>
using namespace std;


int main(){

      int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
      // cout << "Enter your 2d array" << endl;
      //  taking input
      /*
      for(int row=0;row<3;row++){
            for(int col=0; col<4;col++){
                  cin >> arr[row][col];
            }
      }
      */
      cout << endl;
      // output
      for(int row=0;row<3;row++){
            for(int col=0; col<4;col++){
                  cout <<  arr[row][col];
            }
      }

      return 0;
}