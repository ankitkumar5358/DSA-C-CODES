#include<iostream>
#include<climits>

using namespace std;

int largestRowSum(int arr[][3], int row, int col){
  int maxi = INT_MIN;
  int rowIndex = -1;
  for(int row=0;row<3;row++){
    int sum = 0;
    for(int col = 0; col<3; col++){
      sum += arr[row][col];
    }
    if(sum > maxi){
      maxi = sum;
      rowIndex = row;
    }
    cout << endl;
  }
  cout << "The maximum sum is  " << maxi << endl;
  return rowIndex;
}
// 1 2 3 4 5 6 7 8 9
int main() {
  int arr[3][3];
  cout << "Enter the array to row sum  " << endl;
  // taking i/p
  for(int row =0; row<3; row++){
    for(int col =0; col<3; col++){
      cin >> arr[row][col];
    }
  }
  cout << endl;
  // printing o/p
  for(int row =0; row<3; row++){
    for(int col =0; col<3; col++){
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }
  int ansIndex = largestRowSum(arr,3,3);
  cout << "Maximum row is at index  " << ansIndex << endl;

  return 0;
}
